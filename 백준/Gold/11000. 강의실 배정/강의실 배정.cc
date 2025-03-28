#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> classtime(N);

    for (int i = 0; i < N;i++)
    {
        cin >> classtime[i].first>>classtime[i].second;
    }

    sort(classtime.begin(), classtime.end());

    // for (int i = 0; i < N;i++)
    // {
    //     cout << classtime[i].first << " " << classtime[i].second << '\n';
    // }

    priority_queue <int,vector<int>,greater<int>> finish;

    finish.push(classtime[0].second);

    for (int i = 1; i < N;i++)
    {
        if (classtime[i].first>=finish.top())
        {
            finish.pop();
            finish.push(classtime[i].second);
        }
        else
        {
            finish.push(classtime[i].second);
        }
    }

    cout << finish.size();

    return 0;
}

