#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<char, int> symbol = {{'{', -1}, {'[', -2}, {'(', -3}, {'}', 1}, {']', 2}, {')', 3}};

string isBalanced(string s) {
    stack<char> st;
    for (char bracket : s) {
        if (symbol[bracket] < 0) {
            st.push(bracket);
        } else {
            if (st.empty()) return "No";
            char top = st.top();
            st.pop();
            if (symbol[bracket] + symbol[top] != 0) {
                return "No";
            }
        }
    }
    if (st.empty()) return "Yes";
    return "No";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}
