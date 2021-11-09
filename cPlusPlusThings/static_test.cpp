// #include <iostream> 
// #include <string> 
// using namespace std; 

// void demo() 
// { 
//     // static variable 
//     static int count = 0; 
//     cout << count << " "; 

//     // value is updated and 
//     // will be carried to next 
//     // function calls 
//     count++; 
// } 

// int main() 
// { 
//     for (int i=0; i<5; i++)  
//         demo(); 
//     return 0; 
// } 


// #include<iostream> 
// using namespace std; 

// class Apple 
// { 
// public: 
//     static int i; 

//     Apple() 
//     { 
//         // Do nothing 
//     }; 
// }; 

// int Apple::i = 1;

// int main() 
// { 
// Apple obj1; 
// Apple obj2; 

// // prints value of i 
// cout << obj1.i<<" "<<obj2.i; 
// } 

#include<iostream> 
using namespace std; 

class Apple 
{ 
    public: 
        // static member function 
        static void printMsg() 
        {
            cout<<"Welcome to Apple!"; 
        }
}; 

// main function 
int main() 
{ 
    // invoking a static member function 
    // Apple::printMsg(); 
    Apple a;
    a.printMsg();
} 