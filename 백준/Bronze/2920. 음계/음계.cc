#include <iostream>
bool Ascend(int Arr[])
{
    int count = 0;
    for (int i = 1; i < 8; i++)
    {
        if ((Arr[i]==Arr[i-1]+1)&&(Arr[0]==1))
        {
            count++;
        }
    }
    if (count==7)
    {
        return true;
    }
    else
        return false;
}
bool Descend(int Arr[])
{
    int count = 0;
    for (int i = 1; i < 8;i++)
    {
        if((Arr[i]==Arr[i-1]-1)&&Arr[0]==8)
        {
            count++;
        }
    }
    if (count==7)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    using namespace std;

    int Arr[8];
    for (int i = 0; i < 8;i++)
    {
        cin >> Arr[i];
    }
    if (Ascend(Arr))
    {
        cout << "ascending";
    }
    else if (Descend(Arr))
    {
        cout << "descending";
    }
    else
        cout << "mixed";
}