#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N, M, num;
    cin >> N;
    vector<int> Arr(N);
    for (int i = 0; i < N;i++)
    {
        cin >> Arr[i];
    }
    sort(Arr.begin(), Arr.end());
    cin >> M;
    for (int i = 0; i < M;i++)
    {
        cin >> num;
        if(binary_search(Arr.begin(), Arr.end(), num))
        {
            cout << 1 << '\n';
        }
        else
            cout << 0 << '\n';
    }
    return 0;
}
