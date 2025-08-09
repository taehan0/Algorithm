#include <iostream>
#include <stack>

using namespace std;

int main() {
    int T;
    string sentence;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        stack<char> s;
        bool isValid=true;
        getline(cin, sentence);
        for (auto c: sentence) {
            if (c == '(') {
                s.push(c);
            } else if (c==')') {
                if (s.empty()) {
                    isValid = false;
                } else {
                    s.pop();
                }
            }
        }
        if (!s.empty()) {
            isValid = false;
        }
        cout << (isValid == true ? "YES" : "NO") << '\n';
    }
}
