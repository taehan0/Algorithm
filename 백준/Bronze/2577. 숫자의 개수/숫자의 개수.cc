#include <iostream>
int main()
{
    using namespace std;
    int A, B, C;
    cin >> A >> B >> C;
    A *= (B * C);
    string str=to_string(A);
    for (int i = 0; i < 10;i++)
    {
        int count = 0;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j]==i+'0')
            {
                count++;
            }
        }
        cout << count << '\n';
    }
}