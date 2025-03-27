#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cpr(pair<int,int> a,pair<int,int> b)
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
    vector <pair <int,int>> arr(N);
    for (int i = 0; i < N;i++)
    {
        cin >> arr[i].first>>arr[i].second;
    }

    sort(arr.begin(), arr.end(),cpr);

    int finish = arr[0].second;
    int count = 1;

    for (int i = 1; i < N;i++)
    {
        if (arr[i].first>=finish)
        {
            if(arr[i].first==arr[i].second)
            {
                count++;
            }
            else
            {
                finish = arr[i].second;
                count++;
            }
        }
    }

    cout << count;

    return 0;
}