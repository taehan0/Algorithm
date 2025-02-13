#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    getline(cin, str);
    if (str==" ")
    {
        cout << 0;
        return 0;
    }

    if(str.front()==' ')
    {
        str.erase(str.begin());
    }
    if (str.back()==' ')
    {
        str.erase(str.end()-1);
    }
    int c1=count(str.begin(), str.end(), ' ');
    cout << c1 + 1;
}