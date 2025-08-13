#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool zombiePc[101];
vector<int> linked[101];
queue<int> q;
int numberOfZombiePc;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int numberOfPc, numberOfPair, pc1, pc2;
    cin >> numberOfPc >> numberOfPair;
    while (numberOfPair--) {
        cin >> pc1 >> pc2;
        linked[pc1].push_back(pc2);
        linked[pc2].push_back(pc1);
    }
    q.push(1);
    while (!q.empty()) {
        int currentPc = q.front();
        q.pop();
        if (zombiePc[currentPc] == false) {
            zombiePc[currentPc] = true;
            numberOfZombiePc++;
            for (int i = 0; i < linked[currentPc].size(); i++) {
                q.push(linked[currentPc][i]);
            }
        }
    }
    cout << numberOfZombiePc - 1;
}
