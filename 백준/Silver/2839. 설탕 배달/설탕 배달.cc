#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int bag5, bag3;

    if(N%5==0||N%5==3)
    {
        bag5 = N / 5;
        bag3 = N%5 / 3;
    }
    else if(N%5==1||N%5==4)
    {
        bag5 = N / 5 - 1;
        bag3 = (N%5+5) / 3;
    }
    else
    {
        bag5 = N / 5 - 2;
        bag3 = (N%5+10) / 3;
    }

    if(bag5<0)
    {
        cout<< -1;
    }

    else
    {
        cout<< bag5 + bag3;
    }

    return 0;
}