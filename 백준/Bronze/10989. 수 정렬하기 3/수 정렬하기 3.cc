#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N;
    cin >> N;
    int num;
    vector<int> Arr(10001,0);
    for (int i = 0;i<N;i++)
    {
        cin >> num;
        Arr[num]++;
    }

    for (int i = 0; i <= 10000;i++)
    {
        if(Arr[i]>0)
        {
            for (int j = 0; j < Arr[i];j++)
            {
                cout << i << '\n';
            }
        }
    }
    return 0;
}
