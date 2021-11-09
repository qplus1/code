//leetcode209 最小长度数组
// 双指针
int minSUbArreyLen(vecotr<int> &nums, int s) {
    int len = 0;
    int slow = 0;
    int fast = 0;
    int res = INT_MAX;
    int sum = 0;
    while (fast < nums.size()) {
        sum += nums[fast];
        while (sum >= s) {
            len = fast - slow + 1;
            res = res > len ? len : res;
            sum -= nums[slow];
            slow++;
        }
        fast++;
    }
    return res == INT_MAX ? 0 : res;
}