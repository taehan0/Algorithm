#include <iostream>

int main()
{
    int N;
    int V;
    int count = 0;

    std::cin >> N;
    int Array[N];
    for (int i = 0; i < N;i++)
    {
        std::cin >> Array[i];
    }
    std::cin >> V;

    for (int i = 0; i < N;i++)
    {
        (Array[i] == V) ? count++ : 0;
    }

    std::cout << count;
    return 0;
}