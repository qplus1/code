// 完全背包问题
#include<iostream>
#include<vector>
using namespace std;

void testComplete() {
    vector<int> weight{1, 2, 4, 6};
    vector<int> value{1, 3, 5, 8};
    int bagSize = 6;
    vector<int> dp(bagSize + 1, 0);
    for (int i = 0; i < weight.size(); ++i) {
        for (int j = weight[i]; j <= bagSize; ++j) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
            cout << "i = " << i
                 << "  j = " << j
                 << "  dp = "<< dp[j] <<endl;
        }
    }
    cout << "the max value which the bag can carry is: "
         << dp[bagSize] <<endl;
}

int main() {
    testComplete();
    system("pause");
    return 0;
}