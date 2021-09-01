//快速排序
//快速排序的基本思想是：通过一趟排序将要排序的数据分割成独立的两部分，
//其中一部分的所有数据都比另外一部分的所有数据都要小，然后再按此方法对
//这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。

// 快速排序的算法步骤如下：
// 挑选基准值：从数列中挑出一个元素，称为 “基准”（pivot） ；
// 分割：重新排序序列，所有比基准值小的元素摆放在基准前面，所有比基准值大的元素摆在基准后面（与基准值相等的数可以到任何一边）。在这个分割结束之后，对基准值的排序就已经完成；
// 递归排序子序列：递归地将小于基准值元素的子序列和大于基准值元素的子序列排序。
// 递归到最底部的判断条件是序列的大小是零或一，此时该数列显然已经有序。
#include <iostream>
#include <vector>
using namespace std;

//分治
int partition(vector<int> &s, int left, int right)
{
    int pivot = s[left]; //基准值
    while (left < right)
    {
        while (left < right && s[right] >= pivot) //从右向左找第一个小于pvoit的数的下标
            right--;
        s[left] = s[right];//把大于povit的数放在左边,挖坑法节省空间
        while (left < right && s[left] < pivot)  //从左向右找第一个大于pvoit的数的下标
            left++;
        s[right] = s[left];//填坑
    }
    s[left] = pivot;
    return left;
}
void quickSort(vector<int> &s, int left, int right)
{
    if (left < right)
    {
        int mid = partition(s, left, right);
        quickSort(s, left, mid - 1);
        quickSort(s, mid + 1, right);
    }
}

int main()
{
    cout << "快速排序前：" << endl;
    vector<int> res = {3, 2, 5, 8, 4, 7, 8, 6, 18, 0};
    for (auto x : res)
    {
        cout << x << '\t';
    }
    cout<<"******"<<endl;
    cout << "快速排序后：" << endl;
    int len = res.size();
    quickSort(res, 0, len - 1);
    for (auto x : res)
    {
        cout << x << '\t';
    }

    system("pause");
    return 0;
}