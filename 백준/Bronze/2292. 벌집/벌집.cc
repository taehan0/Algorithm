#include <iostream>
//공차가 6n인 등차수열 첫항은 1
//An=3n^2-3n+1
//1
//1+6
//1+6+12
//1+6+12+18...
//An=1+3n(n-1)=3n^2-3n+1

int main()
{
    using namespace std;
    int N;
    int number=0;
    int count = 0;
    int i =1;
    cin >> N;

    while(number<N)
    {
        number = (3 * i * i) - (3 * i) + 1;
        count++;
        i++;
    }
    cout << count;
}