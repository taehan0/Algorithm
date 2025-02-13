#include <iostream>
int main()
{
    
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);
    int Arr[10];
    for (int i = 0; i < 10;i++)
    {
        cin >> Arr[i];
        Arr[i] %= 42;
    }

    int count=10;

    for (int i = 0; i < 9;i++)
    {
        for (int j = i+1; j < 10;j++)
        {
            if (Arr[i]==Arr[j])
            {
                count--;
                break;
            }
        }
    }
    cout << count;
}