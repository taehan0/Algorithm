#include <iostream>
int cons(int x);
int main()
{
    int N;
    std::cin >> N;

    for (int i = 0; i <= N;i++)
    {
        if (cons(i)==N)
        {
            std::cout << i;
            return 0;
        }
    }
    std::cout << 0;
    return 0;
}
int cons(int x)
{
    int result = 0;
    
    for (int i = 0; i < std::to_string(x).length();i++)
    {
        result += std::to_string(x)[i] - '0';
    }

    return result + x;
}