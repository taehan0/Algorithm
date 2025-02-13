#include <iostream>


int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);


    int N;
    std::cin >> N;
    int num1;
    std::cin >> num1;

    int max = num1;
    int min = num1;

    for (int i = 0; i < N - 1;i++)
    {
        std::cin >> num1;
        if (num1>max)
        {
            max = num1;
        }
        if (num1<min)
        {
            min = num1;
        }
    }

    std::cout << min << " " << max;
}