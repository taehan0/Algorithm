#include <iostream>
#include <vector>

using namespace std;

int T, M, N, K, X, Y;
int numberOfWorms;
vector<vector<bool> > farm;
vector<vector<bool> > safe;

void dfs(int x, int y) {
    if (x < 0 || x >= M || y < 0 || y >= N) {
        return;
    }
    if (farm[y][x] == true && safe[y][x] == false) {
        safe[y][x] = true;
        dfs(x - 1, y);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while (T--) {
        cin>>M>>N>>K;
        farm.assign(N, vector<bool>(M, false));
        safe.assign(N, vector<bool>(M, false));
        numberOfWorms = 0;
        for (int i = 0; i < K; i++) {
            cin >> X >> Y;
            farm[Y][X] = true;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (farm[i][j] == true && safe[i][j] == false) {
                    dfs(j, i);
                    numberOfWorms++;
                }
            }
        }
        cout << numberOfWorms << '\n';
    }
}
