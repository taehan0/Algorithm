#include <iostream>
int main()
{
    
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);

    int Loop;
    cin >> Loop;
    string str;


    for (int i = 0; i < Loop;i++)
    {
        int count = 0;
        int score = 0;
        cin >> str;
        for (int j = 0; j < str.length();j++)
        {
            if (str[j]=='O')
            {
                count++;
                score += count;
            }
            else
            {
                count = 0;
            }
        }
        cout << score<<'\n';
    }
}