#include <iostream>
#include <vector>
using namespace std;

vector<int> list;

void push(int x) {
    list.push_back(x);
}

void pop() {
    if (!list.empty()) {
        cout<<list.back()<<'\n';
        list.pop_back();
    }
    else {
        cout<<-1<<'\n';
    }
}

void size() {
    cout<<list.size()<<'\n';
}

void empty() {
    if (list.empty())
        cout<<1<<'\n';
    else
        cout<<0<<'\n';
}

void top() {
    if (!list.empty())
        cout<<list.back()<<'\n';
    else
        cout<<-1<<'\n';
}
int main() {
    int n;
    int x;
    cin>>n;
    string order;

    for (int i=0;i<n;i++) {
        cin>>order;

        if (order=="push") {
            cin>>x;
            push(x);
        }
        else if (order=="pop")
            pop();
        else if (order=="size")
            size();
        else if (order=="empty")
            empty();
        else if (order=="top")
            top();
    }
}
