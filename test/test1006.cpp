// 长度最小的子数组
// 暴力求解法
int minSunLen(vector<int> &nums, int target) {
    int len = 0;
    int minLen = INT_MAX;
    int sum = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        sum = 0;
        for (int j = i; j < nums.size(); ++j) {
            sum += nums[j];
            if (sum >= target) {
                int len = j - i + 1;
                minLen = len < minLen ? min : minLen;
                break;
            }
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}

// 滑动窗口法
int minSubLen(vector<int> &nums, int target) {
    int minLen = INT_MAX;
    int i = 0;
    int sum = 0;
    int len = 0;
    for (int j = 0; i < nums.size(); ++j) {
        sum += nums[j];
        while (sum >= target) {
            len = j - i + 1;
            minLen = minLen < len ? minLen : len;
            sum -= nums[i];
            i++;
        }
    }
    return minLen == INT_MAX ? 0 minLen;
}