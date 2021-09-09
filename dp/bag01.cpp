#include<iostream>
#include<vector>
#include<memory>
using namespace std;
void MaxBagValue() {
    vector<int> weight{1, 3, 4};
    vector<int> value{15, 20, 30};
    int bagWeight = 4;
    // create vector
    // i--取下标为i的物品   j--放入背包容量为j的背包  dp--总价值是多少
    vector<vector<int>> dp(weight.size() + 1, vector<int>(value.size()+1, 0));

    // initialize
    for (int j = weight[0]; j <= bagWeight; ++j) {
        dp[0][j] = value[0];
    }

    // traverse
    for (int i = 1; i < weight.size(); ++i) {   // traverse things
        for (int j = 0; j <= bagWeight; ++j) {  // traverse bag 
            if (j < weight[i]) {    // 若背包容量小于物品重量， 则取上一次结果
                dp[i][j] = dp[i-1][j];
            } else {   //若背包容量足够
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
            }
        }
    }

    cout << "The max value is: "
         << dp[weight.size()-1][bagWeight] << endl;
}

int main() {
    MaxBagValue();
    system("pause");
    return 0;
}