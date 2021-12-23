#include <iostream>
using namespace std;

inline void print_reverse(string);

int main() {
    string s;
    cin >> s;
    cout << s, print_reverse(s);
    return 0;
}

inline void print_reverse(string s) {
    for (int i = s.length() - 1; i >= 0; i--)
        cout << s[i];
    cout << endl;
}
