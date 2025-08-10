#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M, num;
    int sum=0;
    map<int, int> m;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (m.count(num) == 0) {
            m.insert({num, 1});
        } else {
            m[num]=++m[num];
        }
    }
    cin>>M;
    for (int j=0;j<M;j++) {
        cin>>num;
        if (m.count(num)!=0) {
            cout<<m[num]<<' ';
        }
        else {
            cout<<0<<' ';
        }
    }
}
