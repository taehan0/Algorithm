#include <iostream>
using namespace std;
int Pac(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int N, K;
    cin >> N >> K;
    cout<< Pac(N) / Pac(K) / Pac(N - K);
    
}