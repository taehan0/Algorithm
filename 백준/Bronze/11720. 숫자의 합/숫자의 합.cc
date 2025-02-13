#include <iostream>

int main()
{
    int N;
    int sum = 0;


    std::cin >> N;
    std::string num;
    std::cin >> num;

    for (int i = 0; i < N;i++)
    {
        sum += num[i] - '0';
    }

    std::cout << sum;

    return 0;
}