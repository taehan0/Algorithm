#include <iostream>
#include <algorithm>

int Tshirt(int x,int t)
{
    if (x%t==0)
        return x / t;

    else
        return x / t + 1;
}
int main()
{
    using namespace std;
    int N, T, P;
    int size[6];
    int sumT = 0;

    cin >> N;
    for (int i = 0; i < 6;i++)
    {
        cin >> size[i];
    }
    cin >> T >> P;

    for (int i = 0; i < 6;i++)
    {
        size[i] = Tshirt(size[i], T);
        sumT += size[i];
    }

    cout << sumT << '\n';

    cout << N / P << ' ' << N % P;
}