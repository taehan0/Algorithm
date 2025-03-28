#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    queue<int> q;

    int N;
    cin >> N;
    cin.ignore();

    string str;

    for (int i = 0; i < N;i++)
    {
        getline(cin, str);

        if (str.find("push")==0)
        {
            string numstr;
            numstr = str.substr(5);
            q.push(stoi(numstr));
        }
        else if(str.find("pop")==0)
        {
            if(q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout<<q.front()<<'\n';
                q.pop();
            }
        }

        else if(str.find("size")==0)
        {
            cout<<q.size()<<'\n';
        }

        else if(str.find("empty")==0)
        {
            if(q.empty())
            {
                cout << 1<<'\n';
            }
            else
            {
                cout << 0<<'\n';
            }
        }

        else if(str.find("front")==0)
        {
            if(q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout<<q.front()<<'\n';
            }
        } 

        else if(str.find("back")==0)
        {
            if(q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout<<q.back()<<'\n';
            }
        }
    }

    return 0;
}
