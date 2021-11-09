#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
int partition(vector<int> &nums, int left, int right) {
    int pivot = nums[left];
    while (left < right) {
        while (left < right && nums[right] >= pivot) right--;
        nums[left] = nums[right];
        while (left < right && nums[left] < pivot) left++;
        nums[right] = nums[left];
    }
    nums[left] = pivot;
    return left;
}
void quickSort(vector<int> &nums, int left, int right) {
    if (left < right) {
        int mid = partition(nums, left , right);
        quickSort(nums, left, mid - 1);
        quickSort(nums, mid + 1, right);
    }
}
void bubbleSort(vector<int> &nums) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 0; j < nums.size() -1 - i; ++j) {
            if (nums[j] > nums[j + 1]) swap(nums[j], nums[j + 1]);
        }
    }
}
void selectSort(vector<int> &nums) {
    int len = nums.size();
    int k;
    for (int i = 0; i < len - 1; ++i) {
        int k = i;
        for (int j = i; i < len - 1; ++i) {
            if (nums[i] > nums[j]) {
                k = j;
            }
        }
    }
}
int main() {
    srand((unsigned)time(NULL));
    vector<int> res;
    for (int i = 0; i < 20; ++i) {
        int num = rand()%20 + 1;
        res.push_back(num);
    }
    quickSort(res, 0, res.size() - 1);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }

    system("pause");
    return 0;
}

int partition(vector<int> &nums, int left, int right) {
    int key = left;
    while (left < right) {
        while (left < right && nums[right] > nums[key]) {
            right--;
        }
        nums[left] = nums[right];
        while (left < right && nums[left] < nums[key]) {
            left++;
        }
        nums[right] = nums[left];
    }
    nums[left] = nums[key];
    return left;
}
void quickSort(vector<int> &nums, int left, int right) {
    if (left < right) {
        int mid = partition(nums, 0, nums.size() - 1);
        quickSort(nums, left, mid);
        quickSort(nums, mid + 1, right);
    }
}