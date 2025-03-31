#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> dp(1001, 0);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i < 1001;i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2])%10007;
    }

    int n;
    cin >> n;
    cout << dp[n] % 10007;
    return 0;
}