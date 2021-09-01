//冒泡排序算法步骤
// 比较相邻的元素。如果第一个比第二个大，就交换他们两个；
// 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数；
// 针对所有的元素重复以上的步骤，除了最后一个；
// 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较
#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &num) //加上引用方便就地排序
{
    int len = num.size();         //排序数组长度
    for (int i = 0; i < len; i++) //循环次数
    {
        for (int j = 0; j < len - i - 1; j++) //注意此处边界是len-i-1
        {
            if (num[j] > num[j + 1])
                swap(num[j], num[j + 1]);
        }
    }
    return;
}

int main()
{
    cout << "冒泡排序前：" << endl;
    vector<int> res = {3, 2, 5, 8, 4, 7, 8, 6, 18, 0};
    for (auto x : res)
    {
        cout << x << '\t';
    }
    cout << "冒泡排序后：" << endl;
    bubbleSort(res);
    for (auto x : res)
    {
        cout << x << '\t';
    }

    system("pause");
    return 0;
}