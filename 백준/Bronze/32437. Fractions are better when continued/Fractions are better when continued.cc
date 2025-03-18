#include <iostream>
using namespace std;

int next(int a)
{
    if (a==0||a==1)
    {
        return 1;
    }

    return (next(a - 1)+next(a - 2));
}

int main()
{
    int N;
    cin >> N;
    cout << next(N);
    return 0;
}
