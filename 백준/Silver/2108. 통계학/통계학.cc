#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
bool cpr(int a,int b)
{
    return a < b;
}
int main()
{
    int N;
    int Av1 = 0;
    int Av2, Av3, Av4;
    std::cin >> N;
    std::vector<int> Arr(N);
    for (int i = 0; i < N;i++)
    {
        std::cin >> Arr[i];
        Av1 += Arr[i];
    }
    Av1=round(Av1 / (double)N);
    sort(Arr.begin(), Arr.end(),cpr);
    Av2 = Arr[N / 2];

    std::vector<int> Numarr(8001, 0);
    for (int i = 0; i < N;i++)
    {
        Numarr[Arr[i] + 4000]++;
    }
    auto maxidx1 = max_element(Numarr.begin(), Numarr.end());
    auto maxidx2 = max_element(maxidx1 + 1, Numarr.end());

    if(*maxidx1!=*maxidx2)
    {
        Av3= distance(Numarr.begin(), maxidx1)-4000;
    }
    else
    {
        Av3= distance(Numarr.begin(), maxidx2) - 4000;
    }

    Av4 = Arr.back() - Arr.front();

    std::cout << Av1 << '\n'
              << Av2 << '\n'
              << Av3 << '\n'
              << Av4;

    return 0;
}