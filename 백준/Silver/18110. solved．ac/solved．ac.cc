#include <iostream>
#include <vector>
#include <algorithm>
int dv(int x)
{
    if(((x*15)%100)<50)
    {
        return x * 0.15;
    }
    else
    {
        return ((x * 15) / 100) + 1;
    }
}
int main()
{
    int n1,n2,score,del;
    int avg = 0;
    std::vector<int> Arr;
    std::cin >> n1;

    if (n1==0)
    {
        std::cout << 0;
        return 0;
    }

    del = dv(n1);
    n2 = n1 - 2 * del;
    for (int i = 0; i < n1; i++)
    {
        std::cin >> score;
        Arr.push_back(score);
    }
    sort(Arr.begin(), Arr.end());

    for (int i = del;i<n1 - del;i++)
    {
        avg += Arr[i];
    }

    double n3 = (double)n2;

    if ((avg/n3-avg/n2)<0.5)
    {
        avg /= n2;
    }

    else
    {
        avg = avg / n2 + 1;
    }

    std::cout << avg;

    return 0;
}