#include <iostream>
#include <stack>

using namespace std;

int main() {
    int K;
    stack<int> s;
    cin>>K;
    int value;
    int sum=0;;
    for (int i=0;i<K;i++) {
        cin>>value;
        if (value==0) {
            s.pop();
        }
        else {
            s.push(value);
        }
    }
    int size=s.size();
    for (int j=0;j<size;j++) {
        sum+=s.top();
        s.pop();
    }
    cout<<sum;
}