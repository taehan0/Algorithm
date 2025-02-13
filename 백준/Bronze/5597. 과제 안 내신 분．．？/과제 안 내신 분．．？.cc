#include <iostream>

int main()
{
    int Array[31]={0,};
    int i, num;

    for (i = 1; i <= 28;i++)
    {
        std::cin >> num;
        Array[num] = 1;
    }

    for (i = 1; i <= 30;i++)
    {
        if (Array[i]==0)
        {
            std::cout << i<<'\n';
        }
    }

        return 0;
}