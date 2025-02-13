#include <iostream>

int main()
{
    int line;
    int a, b;

    std::cin >> line;

    for (; line >= 1;line--)
    {
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }

    return 0;
}