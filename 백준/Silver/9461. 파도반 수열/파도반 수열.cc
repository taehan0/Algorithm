#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    vector<long long> arr(101,0);
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;

    for (int i = 6; i < 101;i++)
    {
        arr[i] = arr[i - 1] + arr[i - 5];
    }

    for (int i = 0; i < T;i++)
    {
        int n;
        cin >> n;
        cout << arr[n]<<'\n';
    }

    return 0;
}
