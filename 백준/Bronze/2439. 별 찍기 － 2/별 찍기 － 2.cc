#include <iostream>

int main()
{
    int star;
    std::cin >> star;

    for (int i = 0; i < star;i++)
    {
        for (int j = i+1; j < star;j++)
        {
            std::cout << " ";
        }
        for (int j = star; j > star-i-1;j--)
        {
            std::cout << '*';
        }
            std::cout << '\n';
    }
}