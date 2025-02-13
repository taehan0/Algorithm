#include <iostream>

int func(int x)
{
    return x * x;
}

int main()
{
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        int a;

        std::cin >> a;
        b += func(a);
    }
    std::cout << b%10;
}