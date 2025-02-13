#include <iostream>
#define Func(x,y) (x+y)*(x-y)

int main()
{
    long long A, B;
    std::cin >> A >> B;
    std::cout << Func(A, B);
}