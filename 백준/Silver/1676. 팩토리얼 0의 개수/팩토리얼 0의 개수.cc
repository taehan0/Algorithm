#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int count = 0;

    for (; N > 0;N--)
    {
        int N2 = N;
        while(1)
        {
            if(N2%5==0)
            {
                N2 /= 5;
                count++;
            }
            else
            {
                break;
            }
        }
    }
    cout << count;
    return 0;
}