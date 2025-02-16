#include <iostream>
#include <vector>

int main()
{
    int T, k, n;
    std::cin >> T;

    for (int i = 0; i < T;i++)
    {
        std::cin >> k >> n;
        std::vector<std::vector<int>> Arr(k+1,std::vector<int> (n+1,0));

        for (int j = 0; j <= n;j++)
        {
            Arr[0][j] = j;
        }

        for (int j = 1; j <= k;j++)
        {
            for (int m = 1; m <= n;m++)
            {
                int sum = 0;
                for (int l = 1; l <= m; l++)
                { 
                    sum += Arr[j - 1][l];
                }
                Arr[j][m] = sum;
            }
        }

        std::cout << Arr[k][n]<<'\n';
    }

    return 0;
}