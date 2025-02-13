#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::vector<int>> Arr(N, std::vector<int>(3, 0));

    for (int i = 0; i < N;i++)
    {
        std::cin >> Arr[i][0] >> Arr[i][1];
    }

    for (int i = 0; i < N;i++)
    {
        for (int j = 0; j < N;j++)
        {
            if ((Arr[i][0]<Arr[j][0])&&(Arr[i][1]<Arr[j][1]))
            {
                Arr[i][3]++;
            }
        }
    }

    for (int i = 0; i < N;i++)
    {
        std::cout << Arr[i][3]+1 << ' ';
    }
}