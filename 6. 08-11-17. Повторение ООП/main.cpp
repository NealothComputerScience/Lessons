#include <iostream>

using namespace std;

class Base {
    public: 
        int a = 1;
        Base(){
            Function_virt();
        }
        virtual void Function_virt(){
            cout << " Function virt1!!!" << endl;
        }
        virtual ~Base(){
            cout << "Base destr" << endl;
        }    
    private:
        int b = 2;
};

class Child: public Base {
    private: 
        mutable int a = 123;
    public:
        Child(){
            Function_virt();
            //cout << b << endl;
        }
        void Function(int a){
            cout << "int" << endl;
        }
        void Function(char a, int b){
            cout << "char int " << (int)a << " " << b << endl;
        }
        void Function(double a){
            cout << "double" << endl;
        }
        void Function_virt(){
            cout << " Function virt2!!!" << endl;
        }
        ~Child(){
            cout << "Child destr" << endl;
            Function(45);
        }
        
        void Test() const {
            a ++ ;
        }
};

class Child2: public Child{
    
};


class InterfaceClass {
    public:
        int a;
        int b;
        int c;
        InterfaceClass();
    //private: 
        int d;
        void Test();
};

InterfaceClass::InterfaceClass() {
    cout << "InterfaceClass instanciated" << endl;
};

void InterfaceClass::Test(){
        cout << "Interface class test method!" << endl;
};




int main() {
	Base *child = new Child();
    delete child;
    
    auto g = int(324);

    InterfaceClass *interface = new InterfaceClass();
    (*interface).Test();

}
