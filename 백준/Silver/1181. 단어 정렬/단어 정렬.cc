#include <iostream>
#include <vector>
#include <algorithm>

bool compare(std::pair<std::string,int> x,std::pair<std::string,int> y)
{
    if(x.second==y.second)
    {
        return x.first < y.first;
    }
    return x.second < y.second;
}
int main()
{
    using namespace std;
    int N;
    cin >> N;
    string str;
    vector<pair<string, int>> Arr(N);
    for (int i = 0; i < N;i++)
    {
        cin >> Arr[i].first;
        Arr[i].second = Arr[i].first.length();
    }

    sort(Arr.begin(), Arr.end(), compare);

    Arr.push_back({"A", 1});

    for (int i = 0; i < N;i++)
    {
        if (Arr[i].first==Arr[i+1].first)
        {
            continue;
        }
        cout << Arr[i].first<<'\n';
    }
    return 0;
}