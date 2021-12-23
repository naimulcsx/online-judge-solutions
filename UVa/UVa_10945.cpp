#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string &s);

int main() {

    string s;
    while(getline(cin, s) && s != "DONE") {
        string str = "";

        for (auto c : s)
            if (isalpha(c))
                str += tolower(c);

        if ( is_palindrome(str) )
            cout << "You won't be eaten!"<< endl;
        else
            cout << "Uh oh.." << endl;
    }

    return 0;
}

bool is_palindrome(string &s) {
    string t = s;
    reverse(s.begin(), s.end());
    return (t == s);
}
