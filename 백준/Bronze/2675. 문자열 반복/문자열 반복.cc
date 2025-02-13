#include <iostream>
int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    int T;
    int R;
    std::cin >> T;
    std::string str;

    for (int i = 0; i < T;i++)
    {
        std::cin >> R >> str;
        for (int j = 0; j < str.length();j++)
        {
            for (int k = 0; k < R;k++)
            {
                std::cout << str[j];
            }
        }
        std::cout << '\n';
    }
}