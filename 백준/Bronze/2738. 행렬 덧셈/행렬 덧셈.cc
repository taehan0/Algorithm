#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;

    int Arr1[N][M];
    int Arr2[N][M];

    for (int i = 0; i < N;i++)
    {
        for (int j = 0; j < M;j++)
        {
            std::cin >> Arr1[i][j];
        }
    }
    for (int i = 0; i < N;i++)
    {
        for (int j = 0; j < M;j++)
        {
            std::cin >> Arr2[i][j];
            Arr2[i][j] += Arr1[i][j];
        }
 
    }
    for (int i = 0; i < N;i++)
    {
        for (int j = 0; j < M;j++)
        {
            std::cout << Arr2[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}