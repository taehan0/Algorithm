#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int count=0;
    char str[1000]={0,};
    scanf("%[^\n]s", str);

    for (int i = 0; i < 1000;i++)
    {
        if (str[i]=='A'||str[i]=='a'||str[i]=='b'||str[i]=='D'||str[i]=='d'||str[i]=='e'||str[i]=='g'||str[i]=='O'||str[i]=='o'||str[i]=='P'||str[i]=='p'||str[i]=='Q'||str[i]=='q'||str[i]=='R'||str[i]=='@')
        {
            count++;
        }
        else if(str[i]=='B')
        {
            count = count + 2;
        }
    }

    cout << count;
    return 0;
}