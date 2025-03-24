    #include <iostream>
    #include <cmath>
    #include <vector>

    using namespace std;

    int N, M;
    vector<int> v;

    int main()
    {
        cin >> M>> N;
        for (int i = sqrt(M); i <= sqrt(N);i++)
        {
            if(i*i>=M&&i*i<=N)
            {
                v.push_back(i * i); 
            }
        }
        int sum = 0;
        for(auto n:v)
        {
            sum += n;
        }

        if(v.size()==0)
        {
            cout <<-1;
        }
        else
        {
            cout << sum << '\n'
                 << v[0];
        }
        return 0;
    }