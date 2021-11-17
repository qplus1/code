// /**
//  * @brief 
//  * 
//  */
// // // #include<iostream>
// // // using namespace std;


// // // class Employee 
// // // { 
// // //     public:
// // //         virtual void raiseSalary() 
// // //         {
// // //             cout<<0<<endl; 
// // //         }

// // //         virtual void promote() 
// // //         { /* common promote code */ } 
// // // }; 

// // // class Manager: public Employee { 
// // //     virtual void raiseSalary() 
// // //     {   
// // //         cout<<100<<endl;    
// // //     } 

// // //     virtual void promote() 
// // //     { /* Manager specific promote */ } 
// // // }; 
// // // class Engineer: public Employee { 
// // //     virtual void raiseSalary() 
// // //     {
// // //         cout<<200<<endl;    
// // //     }

// // //     virtual void promote() 
// // //     { /* Manager specific promote */ } 
// // // }; 

// // // // Similarly, there may be other types of employees 
// // // // We need a very simple function to increment salary of all employees 
// // // // Note that emp[] is an array of pointers and actual pointed objects can 
// // // // be any type of employees. This function should ideally be in a class  
// // // // like Organization, we have made it global to keep things simple 
// // // void globalRaiseSalary(Employee *emp[], int n) 
// // // { 
// // //     for (int i = 0; i < n; i++) 
// // //         emp[i]->raiseSalary(); // Polymorphic Call: Calls raiseSalary()  
// // //     // according to the actual object, not  
// // //     // according to the type of pointer                                  
// // // } 
// // // int main(){
// // //     Employee *emp[]={new Employee(),new Manager(),new Engineer};
// // //     globalRaiseSalary(emp,1); 
// // //     return 0;
// // // }

// // #include <iostream> 
// // using namespace std; 

// // class Base 
// // { 
// //     public: 
// //         virtual void fun ( int x = 10 ) 
// //         { 
// //             cout << "Base::fun(), x = " << x << endl; 
// //         } 
// // }; 

// // class Derived : public Base 
// // { 
// //     public: 
// //         virtual void fun ( int x=20 ) 
// //         { 
// //             cout << "Derived::fun(), x = " << x << endl; 
// //         } 
// // }; 


// // int main() 
// // { 
// //     Derived d1; 
// //     Base *bp = &d1; 
// //     bp->fun();  // 10
// //     return 0; 
// // } 

// #include<iostream> 

// using namespace std; 

// class base { 
//     public: 
//         base()      
//         { cout<<"Constructing base \n"; } 
//         // virtual ~base() 
//         ~base() 

//         { cout<<"Destructing base \n"; }      
// }; 

// class derived: public base { 
//     public: 
//         derived()      
//         { cout<<"Constructing derived \n"; } 
//         ~derived() 
//         { cout<<"Destructing derived \n"; } 
// }; 

// int main(void) 
// { 
//     derived *d = new derived();   
//     base *b = d; 
//     delete b; 
//     system("pause");
//     return 0; 
// } 


#include<iostream> 
using namespace std; 

class Derived; 

class Base { 
    public: 
        virtual void fun() { cout << "Base Fun"; } 
        // friend int main(); 
}; 

class Derived: public Base { 
    public: 
        void fun() { cout << "Derived Fun"; } 
}; 

int main() 
{ 
    Base *ptr = new Derived; 
    ptr->fun(); 
    system("pause");
    return 0; 
}