// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int val) : val(val), next(nullptr) {}
//     ListNode(int val, ListNode *next) : val(val), next(next) {}
// }

//**调试斐波那契数列时间
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace chrono;
//两次递归时间复杂度为O（2^N）
int fabonacci(int i)
{
    if (i <= 0) return 0;
    if (i >= 1) return 1;
    return fabonacci(i-1)+fabonacci(i-2);
}
//*****优化后O(N)
// int fibonacci_3(int first, int second, int n)
// {
//     if (n <= 0)
//         return 0;
//     if (n < 3)
//         return 1;
//     else if (n == 3)
//         return first + second;
//     else
//         return fibonacci_3(second, first + second, n - 1);
// }
void time_comsumption()
{
    int n;
    while (cin >> n)
    {
        milliseconds start_time = duration_cast<milliseconds>(
            system_clock::now().time_since_epoch());

        fabonacci(n);

        milliseconds end_time = duration_cast<milliseconds>(
            system_clock::now().time_since_epoch());
        cout << milliseconds(end_time).count() - milliseconds(start_time).count()
             << " ms" << endl;
    }
}

int main()
{
    time_comsumption();
    return 0;
}
