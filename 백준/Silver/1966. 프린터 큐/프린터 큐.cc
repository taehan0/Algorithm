#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<pair<int, int> > q;
    priority_queue<int> pq;

    int totalcount;
    int N, M, num;

    cin >> totalcount;

    for (int i = 0; i < totalcount; i++) {
        int count = 0;
        cin >> N;
        cin >> M;
        for (int j = 0; j < N; j++) {
            cin >> num;
            q.push({num, j});
            pq.push(num);
        }
        while (!q.empty()) {
            int priority = q.front().first;
            int index = q.front().second;
            q.pop();
            if (priority == pq.top()) {
                pq.pop();
                count++;
                if (M == index) {
                    cout << count<<'\n';

                }
            }
            else {
                q.push({priority,index});
            }
        }
    }
}
