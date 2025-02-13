#include <iostream>
int main()
{
    
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B, C;
    cin >> A >> B >> C;
    cout << A + B - C << '\n';

    int num = B;
    int count = 1;
    while (1)
    {
        if(num/10!=0)
        {
            num /= 10;
            count++;
        }
        else
            break;
    }

    for (int i = 0; i < count;i++)
    {
        A *= 10;
    }

        cout << A + B - C;
}