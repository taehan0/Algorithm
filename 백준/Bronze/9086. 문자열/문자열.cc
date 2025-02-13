#include <iostream>

int main()
{
    int T;
    std::string str;
    std::cin >> T;

    for (; T != 0;T--)
    {
        std::cin >> str;
        std::cout << str.front()<<str.back()<<'\n';
    }
}
