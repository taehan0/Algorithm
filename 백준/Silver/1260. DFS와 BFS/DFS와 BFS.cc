#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int numberOfDot, numberOfLine, firstDot;
vector<int> linked[1001];
bool checkedDots1[1001];
bool checkedDots2[1001];
queue<int> q;

void dfs(int firstDot) {
    cout << firstDot << ' ';
    for (int i = 0; i < linked[firstDot].size(); i++) {
        if (checkedDots1[linked[firstDot][i]] == false) {
            checkedDots1[linked[firstDot][i]] = true;
            dfs(linked[firstDot][i]);
        }
    }
}

void bfs(int firstDot) {
    q.push(firstDot);
    while (!q.empty()) {
        int currentNum = q.front();
        cout << currentNum << ' ';
        q.pop();
        for (int i=0;i<linked[currentNum].size();i++) {
            if (checkedDots2[linked[currentNum][i]]==false) {
                checkedDots2[linked[currentNum][i]]=true;
                q.push(linked[currentNum][i]);
            }
        }
    }
}

int main() {
    cin >> numberOfDot >> numberOfLine >> firstDot;
    for (int i = 0; i < numberOfLine; i++) {
        int dot1, dot2;
        cin >> dot1 >> dot2;
        linked[dot1].push_back(dot2);
        linked[dot2].push_back(dot1);
    }
    for (int i = 0; i < 1001; i++) {
        sort(linked[i].begin(), linked[i].end());
    }
    checkedDots1[firstDot] = true;
    checkedDots2[firstDot] = true;
    dfs(firstDot);
    cout << '\n';
    bfs(firstDot);
}
