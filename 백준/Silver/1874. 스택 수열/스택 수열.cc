#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n,num;
    cin>>n;
    int cur_num=0;
    stack<int> s;
    vector<char> v;
    s.push(cur_num++);

    while (n--) {
    cin>>num;
        while (s.top()<num) {
            s.push(cur_num++);
            v.push_back('+');
        }
        if (s.top()==num) {
            s.pop();
            v.push_back('-');
        }
        else {
            cout<<"NO";
            return 0;
        }
    }
    for (int i=0;i<v.size();i++) {
        cout<<v[i]<<'\n';
    }
    return 0;
}
