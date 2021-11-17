/**
 * @file assert_test.cpp
 * @author pu.qin (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define NDEBUG          // 加上这行，则 assert 不可用
#include <stdio.h> 
#include <assert.h> 
// #include <iostream>
// using namespace std;

int main() 
{ 
    int x = 7; 

    /*  Some big code in between and let's say x  
    is accidentally changed to 9  */
    x = 9; 

    // Programmer assumes x to be 7 in rest of the code 
    // std::cout << "x = " << x << std::endl;
    assert(x==7); 

    /* Rest of the code */
    return 0; 
} 
