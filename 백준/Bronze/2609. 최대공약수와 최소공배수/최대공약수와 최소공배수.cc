#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int a, b, tmp;
    cin >> num1 >> num2;
    a = num1;
    b = num2;

    while(1)
    {
        if(a>b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }

        if(b%a==0)
        {
            cout << a << '\n';
            break;
        }
        else
        {
            b %= a;
        }
    }

    //최소공배수
    cout << (num1 / a) * num2;

    return 0;
}