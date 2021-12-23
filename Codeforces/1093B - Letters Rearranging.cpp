#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool is_palindrome(string s) {
    string temp = s;
    reverse(s.begin(), s.end());
    if (temp == s) return true;
    else return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if ( is_palindrome(s) ) {
            bool found = false;
            [&](){
                for (int j = 0; j < s.length() - 1; ++j) {
                    char temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;

                    if ( !is_palindrome(s) ) {
                        found = true;
                        return;
                    }
                }
            }();

            if (found) cout <<  s << endl;
            else cout << -1 << endl;
        }
        else cout << s << endl;
    }
    return 0;
}