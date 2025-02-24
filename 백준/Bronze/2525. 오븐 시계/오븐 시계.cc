#include <iostream>
int main()
{
    int a, b,c;
    std::cin >> a >> b >> c;

    b += c;
    if(b>=60)
    {
        a = a + b / 60;
        b = b % 60;
    }
    if(a>=24)
    {
        a -= 24;
    }
    std::cout << a << " " << b;
    return 0;
}