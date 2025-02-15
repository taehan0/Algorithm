#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cpr(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() 
{
    int N;
    cin >> N;
    int x;
    int y;
    vector<pair<int, int>> Arr;
    for (int i = 0; i < N;i++)
    {
        cin >> x >> y;
        Arr.push_back({x, y});
    }
    sort(Arr.begin(), Arr.end(), cpr);
    for (int i = 0; i < N;i++)
    {
        cout << Arr[i].first << " " << Arr[i].second << '\n';
    }
    return 0;
}