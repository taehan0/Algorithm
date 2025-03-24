#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int money = 1000 - N;
    int count = 0;

    while (money!=0)
    {

    if(money>=500)
    {
        count++;
        money -= 500;
    }
    else if(money>=100)
    {
        count++;
        money -= 100;
    }
    else if(money>=50)
    {
        count++;
        money -= 50;
    }
    else if(money>=10)
    {
        count++;
        money -= 10;
    }
    else if(money>=5)
    {
        count++;
        money -= 5;
    }
    else if(money>=1)
    {
        count++;
        money -= 1;
    }

    
    }
    cout<<count;
    return 0;
}