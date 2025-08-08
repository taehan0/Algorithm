#include <iostream>
#include <stack>

using namespace std;

int main() {
    string sentences;

    while (getline(cin, sentences)) {
        stack<char> s;
        bool isValid = true;
        if (sentences == ".") {
            break;
        }
        for (auto c: sentences) {
            if (c == '(' || c == '[') {
                s.push(c);
            } else if (c == ')') {
                if (s.empty() || s.top() != '(') {
                    isValid = false;
                    break;
                }
                s.pop();
            } else if (c == ']') {
                if (s.empty() || s.top() != '[') {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) {
            isValid = false;
        }
        if (isValid == false) {
            cout << "no" << '\n';
        } else {
            cout << "yes" << '\n';
        }
    }
}
