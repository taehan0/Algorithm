#include <iostream>
int main()
{
    
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string str;
    cin >> str;
    int count;

    for (char j = 'a'; j <= 'z';j++)
    {
        count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (j==str[i])
            {
                cout << i<<' ';
                count++;
                break;
            }
        }
        if (count==0)
        {
            cout << -1<<' ';
        }
    }
}