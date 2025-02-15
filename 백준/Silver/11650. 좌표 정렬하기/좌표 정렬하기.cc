#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> Arr;
    int x;
    int y;

    for (int i = 0; i < N;i++)
    {
        cin >> x >> y;
        Arr.push_back(make_pair(x, y));
    }

    sort(Arr.begin(), Arr.end());

    for (int i = 0; i < N;i++)
    {
        cout << Arr[i].first << " " << Arr[i].second << '\n';
    }

    return 0;
}