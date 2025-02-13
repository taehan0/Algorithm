#include <iostream>
int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);

    int N, M;
    std::cin >> N >> M;
    int *Arr = new int[N];
    for (int i = 0; i < N;i++)
    {
        std::cin >> Arr[i];
    }
    int answer=0;

    for (int i = 0; i < N-2;i++)
    {
        for (int j = i + 1; j < N-1;j++)
        {
            for (int k = j + 1; k < N;k++)
            {
                int sum = Arr[i] + Arr[j] + Arr[k];
                if ((sum <= M) && (M - sum) < (M - answer))
                {
                    answer = Arr[i] + Arr[j] + Arr[k];
                }
            }
        }
    }
    std::cout << answer;

    delete[] Arr;
}