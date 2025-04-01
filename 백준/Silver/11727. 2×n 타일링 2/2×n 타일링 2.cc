#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> puzzle(n);
    puzzle[0] = 1;
    puzzle[1] = 3;
    for (int i = 2; i < n;i++)
    {
        puzzle[i] = (puzzle[i - 1] + 2 * puzzle[i - 2])%10007;
    }

    cout << puzzle[n - 1];
}