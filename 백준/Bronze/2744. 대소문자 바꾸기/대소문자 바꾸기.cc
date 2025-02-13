#include <iostream>

int main()
{
    char word[101]={0,};
    std::cin >> word;

    for (int i = 0; i < 100;i++)
    {
        if (word[i]>=65&&word[i]<=90)
        {
            word[i] += 32;
        }
        else if(word[i]>=97&&word[i]<=122)
        {
            word[i] -= 32;
        }
        else
        {
            break;
        }

        std::cout << word[i];
    }
}

