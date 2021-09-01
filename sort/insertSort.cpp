//插入排序
// 它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
// 插入排序的算法步骤如下：
// 1 将数组分为有序区和无序区，有序区0,无序区[1,n-1]；
// 2 取下无序区第一个元素，保存其值。
// 3 有序区中元素从后往前与新元素比较，如果新元素更小，旧元素往后移。
// 3 重复步骤3，直到新元素大于或等于旧元素，将新元素插入该元素之后。
// 4 重复步骤234， n-1次，排序完成
#include<iostream>
#include<vector>
using namespace std;

void insertSort(vector<int> &num)
{
    int len = num.size();
    int k;
    for(int i = 1; i<len; i++)
    {
        k =num[i];//保存无序区的第一个元素为k
        int j = i-1;//记得要在第二个循环外定义j;
        //新元素在有序区寻找位置
        while (j >=0 && num[j]>k) //当无序区第一个数小于有序区的数时，有序区的数一次向后移动
        {
            num[j+1] = num[j];
            j--;
        }
        num[j+1] = k; //记住是j+1
    }
}

int main()
{
    cout<<"插入排序前："<<endl;
    vector<int> res = {3,2,5,8,4,7,8,6,18,0};
    for (auto x : res)
    {
        cout<<x<<'\t';
    }
    cout<<"插入排序后："<<endl;
    insertSort(res);
    for (auto x : res)
    {
        cout<<x<<'\t';
    }

    system("pause");
    return 0;
}