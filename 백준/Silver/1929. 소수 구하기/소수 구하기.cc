#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M,N;
    cin>>M>>N;
    vector<bool> isPrime(N+1,true);

    isPrime[0]=isPrime[1]=false;

    for (int i=2;i*i<=N;i++) {
        if (isPrime[i]) {
            for (int j=i*i;j<=N;j+=i) {
                isPrime[j]=false;
            }
        }
    }

    for (int k=M;k<=N;k++) {
        if (isPrime[k]) {
            cout<<k<<' ';
        }
    }

}