#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    string numstr;
    int sum = 0;
    int start = 0;

    for (int i = 0; i < str.length();i++)
    {
        if (str[i] =='+')
        {
            numstr = str.substr(start, i-start);
            start = i + 1;
            sum += stoi(numstr);
        }

        if(i==str.length()-1)
        {
            sum += stoi(str.substr(start));
        }

        else if(str[i]=='-')
        {
            numstr = str.substr(start, i - start);
            start = i + 1;
            sum += stoi(numstr);

            i++;

            for (; i < str.length();i++)
            {
                if(str[i]=='-'||str[i]=='+')
                {
                    numstr = str.substr(start, i - start);
                    start = i + 1;
                    sum -= stoi(numstr);
                }

                if(i==str.length()-1)
                {
                    sum -= stoi(str.substr(start));
                    cout << sum;
                    return 0;
                }
            }
        }
    }

    cout << sum;
    return 0;
}