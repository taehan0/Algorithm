#include <iostream>

int main()
{
    int N;
    int X;

    std::cin >> N>>X;
    int Array[N];

    for (int i = 0; i < N;i++)
    {
        std::cin >> Array[i];
    }

    for (int i = 0; i < N;i++)
    {
        if(Array[i]<X)
        std::cout << Array[i]<<" ";
    }

        return 0;
}