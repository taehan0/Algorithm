#include <iostream>
int main()
{
    
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);

    int T, H, W, N;
    cin >> T;
    int floor;
    int room;

    for (int i = 0; i < T;i++)
    {
    cin >> H >> W >> N;
    
    room = (N / H)+1;
    floor = (N % H);
    if (floor==0)
    {
        floor = H;
        room--;
    }
    cout << floor;
    if(room<10)
    {
        cout << '0' << room<<'\n';
    }
    if(room>=10)
    {
        cout << room<<'\n';
    }
    }
}