#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N, M;
    cin >> N;
    map<int, int> m1;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        m1[num] = 1;
    }

    cin >> M;
    for (int i = 0; i < M;i++)
    {
        cin >> num;
        cout << m1[num] << '\n';
    }

        return 0;
}