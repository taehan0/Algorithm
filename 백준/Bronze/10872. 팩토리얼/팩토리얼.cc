#include <iostream>
int main()
{
    int N;
    int score = 1;

    std::cin >> N;

    if (N>=1)
    {
    for (; N >= 1;N--)
    {
        score *=N;

        if (N==1)
        {
            std::cout << score;
        }
    }
    }
    else
        std::cout << 1;
    return 0;
}