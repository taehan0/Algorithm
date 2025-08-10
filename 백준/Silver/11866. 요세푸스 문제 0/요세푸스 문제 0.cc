#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int N,K;
    cin>>N>>K;
    vector<int> resultList;

    queue<int> q;

    for (int i=1;i<=N;i++) {
        q.push(i);
    }
    while (!q.empty()) {
        for (int i=0;i<K;i++) {
            if (i==K-1) {
                resultList.push_back(q.front());
            }else {
                q.push(q.front());
            }
            q.pop();
        }
    }
    cout<<'<';
    for (int j=0;j<resultList.size()-1;j++) {
        cout<<resultList[j]<<", ";
    }
    cout<<resultList.back()<<'>';
}