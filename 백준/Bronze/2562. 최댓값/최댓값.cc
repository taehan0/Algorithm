#include <iostream>

int main()
{
    int value;
    int Max = -1;
    int Maxnum = 0;

    for (int i = 0; i < 9;i++)
    {
        std::cin >> value;
        if (value>Max)
        {
            Max = value;
            Maxnum = i+1;
        }
    }
    std::cout << Max << '\n'
              << Maxnum;

    return 0;
}