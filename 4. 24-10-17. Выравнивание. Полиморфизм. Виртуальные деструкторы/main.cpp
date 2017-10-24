#include <iostream>

void foo2()
{
    
}

class A {
public: 
    A() {
        std::cout << "A()" << std::endl;
    }
    
    virtual ~A() {
        std::cout << "~A()" << std::endl;
    }
    
    virtual void example5() {}
    virtual void example() {}
    //virtual void example1() = 0;
    static void example2() { std::cout << "123" << std::endl; }
    void example3() {}
    
private:
    char i = 8;
    //static int a = 9;
    // pointer to vp table
};

class B: public A
{
public:
    B() { std::cout << "B()" << std::endl; }
    virtual ~B() { std::cout << "~B()" << std::endl; }
};

class Animal 
{
public:
    Animal() {}
    virtual ~Animal() {}
    virtual void sayHello() = 0;
};

class Dog : public Animal
{
public:
    Dog() {}
    virtual ~Dog() {}
    virtual void sayHello() { std::cout << "woof" << std::endl; }
};

class Cat : public Animal
{
public:
    Cat() {}
    virtual ~Cat() {}
    virtual void sayHello() { std::cout << "meow" << std::endl; }
};

class KotoPes: public Dog, public Cat
{
public:
    KotoPes() {}
    virtual void sayHello() { std::cout << "KotoPes" << std::endl; }
};

int main() {
    /*A::example2();
    A * a = new A;
    foo2();
    std::cout << sizeof(A) << std::endl;
    std::cout << sizeof(a) << std::endl;
    printf("%d : %d", *((int*)a), *((int*)a+1));*/
    // 44 int* + 1 = 4(sizeof int *1)
    
    A *a = new B();
    delete a;
    
    Animal * an = new KotoPes();
    //an->sayHello();
}
