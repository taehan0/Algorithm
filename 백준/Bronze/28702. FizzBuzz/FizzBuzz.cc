#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string FB(int a)
{
    if(a%3==0&&a%5==0)
    {
        return "FizzBuzz";
    }
    else if(a%3==0)
    {
        return "Fizz";
    }
    else if(a%5==0)
    {
        return "Buzz";
    }
    else
    {
        return to_string(a);
    }
}
int main()
{
    int answer;
    vector<string> Arr(3);
    for (int i = 0; i < 3;i++)
    {
        cin >> Arr[i];
        if(Arr[i]!="Fizz"&&Arr[i]!="Buzz"&&Arr[i]!="FizzBuzz")
        {
            answer = stoi(Arr[i]) + (3 - i);
        }
    }
    cout << FB(answer);
    return 0;
}