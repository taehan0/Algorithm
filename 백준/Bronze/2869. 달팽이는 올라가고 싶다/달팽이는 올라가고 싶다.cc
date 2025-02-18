#include <iostream>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int V, A, B;
    cin >> A >> B >> V;
    int Height = 0;
    int Day = 0;

    V -= A;
    Day++;

    if(V%(A-B)==0)
    {
        Day = Day + V / (A - B);
    }
    else
    {
        Day = Day + V / (A - B)+1;
    }
    cout << Day;

    return 0;
}