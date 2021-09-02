// 二分法
#include<iostream>
#include<memory>
#include<vector>
using namespace std;

int search(vector<int> &num, int target);
int search_insert(vector<int> &num, int target);

int main() {
    vector<int> a{1,2,3,5,6,8,9,10};
    int target = 12;
    // search(a,target);
    // system("pause");
    search_insert(a,target);
}

int search(vector<int> &num, int target) {
    int left = 0;
    int right = num.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (num[mid] < target) {
            left = mid + 1;
        } else if (num[mid] > target) {
            right = mid - 1;
        } else {
            cout<<mid<<endl;
            return mid;
        }
    }
    int a = -5;
    cout<<a<<endl;
    return -1;
}
int search_insert(vector<int> &num, int target) {
    int left = 0;
    int right = num.size() - 1;
    if (target > num[right]) {
        cout << right + 1;
        return right + 1;
    }
    if (target < num[left]) {
        cout << left;
        return 0;
    }
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (num[mid] > target) {
            right = mid - 1;
        } else if (num[mid] < target) {
            left = mid + 1;
        } else {
            cout << mid;
            return mid;
        }
    }
        cout << right + 1;
        return right + 1;
}


