#include <iostream>
int main()
{
    int a;
    std::string b;
    std::cin >> a >> b;

    char c = b[2];
    char d = b[1];
    char e = b[0];
    std::cout << a * (c - '0')<<'\n';
    std::cout << a * (d - '0')<<'\n';
    std::cout << a * (e - '0')<<'\n';
    int f=stoi(b);
    std::cout << a * f;
    return 0;
}