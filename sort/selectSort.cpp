//选择排序
//简单选择排序采用最简单的选择方式，从头到尾顺序扫描序列，找出最小的一个记录，和第一个记录交换，接着从剩下的记录中继续这种选择和交换，最终使序列有序。
// 选择排序的算法步骤如下：
// 在未排序序列中找到最小（大）元素，存放到排序序列的起始位置；
// 然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾；
// 以此类推，直到所有元素均排序完毕

//简单选择排序算法，时间复杂度为O(n*n)，空间复杂度为O(1),不稳定

#include<iostream>
#include<vector>
using namespace std;

void selectSort(vector<int> &num)
{
    int k;
    int len = num.size();
    for (int i = 0; i < len; i++)//循环次数
    {
        k=i;//标记要交换的起始值
        //此循环是算法的关键，它挑出无序数组中最小的一个元素
        for(int j = i; j<len; j++)
        {
            if (num[k] > num[j]) k =j;
        }
        swap(num[i],num[k]);
    }
    return;
}

int main()
{
    cout<<"选择排序前："<<endl;
    vector<int> res = {3,2,5,8,4,7,8,6,18,0};
    for (auto x : res)
    {
        cout<<x<<'\t';
    }
    cout<<"选择排序后："<<endl;
    selectSort(res);
    for (auto x : res)
    {
        cout<<x<<'\t';
    }


    system("pause");
    return 0;
}