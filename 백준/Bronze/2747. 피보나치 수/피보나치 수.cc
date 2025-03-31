#include <iostream>
#include <vector>

using namespace std;

int dp(int n)
{
    vector<int> arr(50, 0);

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < 50;i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    cout << dp(n);
    return 0;
}