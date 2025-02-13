#include <iostream>
bool func(int x)
{
    if (x==1)
        return false;
        
    for (int i = 2; i < x; i++)
    {
        if (!(x%i))
            return false;
    }
    return true;
}

int main()
{
    using namespace std;
    int N;
    cin >> N;
    int *Arr = new int[N];
    int count=0;

    for (int i = 0; i < N;i++)
    {
        cin >> Arr[i];
        if (func(Arr[i]))
        {
            count++;
        }
    }

    cout << count;
    delete[] Arr;

    return 0;
}