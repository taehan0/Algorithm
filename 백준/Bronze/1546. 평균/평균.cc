#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    using namespace std;
    cin.tie(0);


    double N;
    cin >> N;

    vector<double> Arr(N, 0);
    for (int i = 0; i < N;i++)
    {
        cin >> Arr[i];
    }
    vector<double>::iterator Maxptr = max_element(Arr.begin(),Arr.end());
    double Maxnum = *Maxptr;
    double average = 0;
    for (int i = 0; i < N; i++)
    {
        Arr[i] = Arr[i] / Maxnum * 100;
        average += Arr[i];
    }
    printf("%.6f", average / N);
    return 0;
}