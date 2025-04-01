#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> stairs(N+1);
    vector<int> sum(N+1);

    for (int i = 1; i < N+1; i++)
    {
        cin >> stairs[i];
    }

    sum[1] = stairs[1];
    sum[2] = stairs[2]+stairs[1];
    sum[3] = max(stairs[3] + stairs[1], stairs[3] + stairs[2]);

    for (int i = 4; i < N + 1;i++)
    {
        sum[i] = max(stairs[i] + sum[i - 2], stairs[i] + stairs[i - 1] + sum[i - 3]);
    }

    cout << sum[N];
    return 0;
}