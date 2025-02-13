#include <iostream>
int main()
{
    using namespace std;
    string str;
    string rstr;
    while (1)
    {
        cin >> str;
        rstr = str;
        if (str == "0")
        {
            break;
        }
        for (int i = 0; i<str.length();i++)
        {
            rstr[str.length()-i-1] = str[i];
        }
        if (str==rstr)
        {
            cout << "yes"<<'\n';
        }
        else
            cout << "no" << '\n';
    }
    return 0;
}