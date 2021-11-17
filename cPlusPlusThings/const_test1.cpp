// #include<iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     int * const ptr = &a;
//     int *b = &a;
//     *b = 5;
//     cout << *ptr << endl;

//     return 0;
// }
/**
 * @file const_test1.cpp
 * @author pu.qin (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
using namespace std;
int main(){
    const int num=0;
    int * const ptr=&num; //error! const int* -> int*
    cout<<*ptr<<endl;
}