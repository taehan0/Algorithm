#include <iostream>
int main()
{
    
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, M;
    cin >> H >> M;
    M -= 45;
    if (M<0)
    {
        H -= 1;
        M += 60;
    }
    if (H<0)
    {
        H += 24;
    }
    cout << H <<' '<< M;
}