#include <iostream>
#include <vector>
using namespace std;
char Op(char a)
{
    if (a=='W')
        return 'B';
    else
        return 'W';
}
int main()
{
    int M, N;
    cin >> M >> N;
    vector<vector<char>> Ex(8, vector<char>(8, '0'));
    vector<vector<char>> Arr(M, vector<char>(N, '0'));
    Ex[0][0] = 'W';
    for (int i = 0; i < 8; i++)
    {
        if(i!=0)
        {
            Ex[i][0] = Op(Ex[i - 1][0]);
        }
        for (int j = 1; j < 8; j++)
        {
            Ex[i][j] = Op(Ex[i][j - 1]);
        }
    }

    for (int i=0; i < M;i++)
    {
        for (int j = 0; j < N;j++)
        {
            cin >> Arr[i][j];
        }
    }

    int minnum = 65;
    for (int x = 0; x + 8 <= M;x++)
    {
        for (int y = 0; y + 8 <= N; y++)
        {
            int count1 = 0;
            int count2 = 0;
            for (int i = x; i < x + 8; i++)
            {
                for (int j = y; j < y + 8;j++)
                {
                    if(Arr[i][j]==Ex[i-x][j-y])
                    {
                        count1++;
                    }
                    else
                    {
                        count2++;
                    }
                }
            }
            int count3 = min(count1, count2);

            if(count3<minnum)
            {
                minnum = count3;
            }
        }
    }

    cout << minnum;
}