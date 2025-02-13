#include <iostream>
int main()
{
    using namespace std;
    int L;
    cin >> L;
    string str;
    cin >> str;
    int num;
    long long temp;
    long long sum = 0;

    for (int i = 0; i < str.length();i++)
    {
        num = (str[i] - 'a' + 1);
        temp = num;
        for (int j = 0; j < i; j++)
        {
            temp *= 31;
            temp %= 1234567891;
        }
        sum += temp;
    }
    cout << sum%1234567891;
}