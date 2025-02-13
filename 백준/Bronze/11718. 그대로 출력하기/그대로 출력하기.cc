#include <iostream>

int main()
{
    char str[101]={0,};
    while (scanf("%[^\n]s",str)!=EOF)
    {
        std::cout << str<<'\n';
        getchar();
    }
}
