// #include<iostream>
// using namespace std;

// class A {
// public:
//     virtual void f() = 0;  // 纯虚函数
//     void g(){ this->f(); }
//     A(){}
// };
// class B:public A{
// public:
//     void f(){ cout<<"B:f()"<<endl;}
// };
// int main(){
//     B b;
//     b.g();
//     A* a = new B();
//     a->g();
//     return 0;
// }

// #include<iostream> 
// using namespace std; 

// // An abstract class with constructor 
// class Base 
// { 
//     protected: 
//         int x; 
//     public: 
//         virtual void fun() = 0; 
//         Base(int i) { x = i; } 
// }; 

// class Derived: public Base 
// { 
//     int y; 
//     public: 
//     Derived(int i, int j):Base(i) { y = j; } 
//     void fun() { cout << "x = " << x << ", y = " << y; } 
// }; 

// int main(void) 
// { 
//     Derived d(4, 5); 
//     d.fun(); 
//     return 0; 
// } 


#include<iostream>
using namespace std;

class Base  {
    public:
        Base()    { cout << "Constructor: Base" << endl; }
        virtual ~Base()   { cout << "Destructor : Base" << endl; }
};

class Derived: public Base {
    public:
        Derived()   { cout << "Constructor: Derived" << endl; }
        ~Derived()   { cout << "Destructor : Derived" << endl; }
};

int main()  {
    Base *Var = new Derived();
    delete Var;
    return 0;
}
