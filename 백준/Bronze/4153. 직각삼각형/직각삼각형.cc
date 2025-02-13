#include <iostream>
int sqrt(int x)
{
    return x * x;
}
int main()
{
    using namespace std;
    int x, y, z;

    while(cin >> x >> y >> z && x!=0||y!=0||z!=0)
    {
        
        if (sqrt(x)==sqrt(y)+sqrt(z)||sqrt(y)==sqrt(x)+sqrt(z)||sqrt(z)==sqrt(x)+sqrt(y))
        {
            cout << "right" << '\n';
        }
        else
            cout << "wrong"<<'\n';
    }
}