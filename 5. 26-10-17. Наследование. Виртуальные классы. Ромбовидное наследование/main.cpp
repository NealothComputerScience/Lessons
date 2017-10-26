#include <iostream>

struct Shape
{
    virtual ~Shape() { std::cout << "~1" << std::endl; }
    
    virtual void draw() = 0;
};

struct Circle : public Shape
{
    Circle() { std::cout << "2" << std::endl; }
    ~Circle() { std::cout << "~2" << std::endl; }
    
    void draw() { std::cout << "circle" << std::endl; }
};

struct Ellipse : public Circle
{
    Ellipse() { std::cout << "3" << std::endl; }
    ~Ellipse() { std::cout << "~3" << std::endl; }
    
    void draw() { std::cout << "ellipse" << std::endl; }
};

struct A
{
    A() { std::cout << "A" << std::endl; }
    A(int a_) : a(a_)  { std::cout << "A" << std::endl; }
    virtual ~A() { std::cout << "~A" << std::endl; } 
    
    int print(void) const { return a; }
    
    int a = 5;
};

struct B : virtual public A
{
    B() { std::cout << "B" << std::endl; }
    ~B() { std::cout << "~B" << std::endl; }
    
    int print1(void) const { return a; }
};

struct C : virtual public A
{
    C() { std::cout << "C" << std::endl; }
    ~C() { std::cout << "~C" << std::endl; } 
    
    int print2(void) const { return a; }
};

struct F : virtual public A
{
    F() { std::cout << "F" << std::endl; }
    ~F() { std::cout << "~F" << std::endl; } 
    
    int print2(void) const { return a; }
};


struct D : public B, public C, public F
{
    D() { std::cout << "D" << std::endl; }
    ~D() { std::cout << "~D" << std::endl; } 
};

// deadly diamond of death

void print(Shape * shape)
{
    shape->draw();
};

int main() {
    //Shape *shape = new Circle();
    //print(shape);
    //delete shape;
    
    D d;
    int result = d.print1();
    //int result2 = d.print2();
    
    std::cout << sizeof (d) << std::endl;
    
    std::cout << result << " " /*<< result2 */<< std::endl;
}
