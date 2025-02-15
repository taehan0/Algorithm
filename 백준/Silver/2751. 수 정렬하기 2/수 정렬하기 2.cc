#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> Arr(N);

    for (int i = 0; i < N;i++)
    {
        cin >> Arr[i];
    }
    
    sort(Arr.begin(), Arr.end());
    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << '\n';
    }

    return 0;
}