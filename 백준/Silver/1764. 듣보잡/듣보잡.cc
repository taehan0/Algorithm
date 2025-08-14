#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
    map<string, int> m;
    int N, M;
    int count=0;
    queue<string> result;
    string name;
    cin >> N >> M;
    while (N--) {
        cin >> name;
        m[name] = 1;
    }
    while (M--) {
        cin >> name;
        if (m.find(name) != m.end()) {
            m[name] = 2;
        }
    }
    for (auto &p:m) {
        if (p.second==2) {
            count++;
            result.push(p.first);
        }
    }
    cout<<count<<'\n';
    for (int i=0;i<count;i++) {
        cout<<result.front()<<'\n';
        result.pop();
    }
}
