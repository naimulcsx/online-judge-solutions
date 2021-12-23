#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char);
bool is_mutated(string, string);

int main() {
    int n;
    cin >> n;
    
    while(n--) {
        string a, b;
        cin >> a >> b;

        if (is_mutated(a, b))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

bool is_vowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? true : false;
}

bool is_mutated(string a, string b) {    
    if ( a.length() != b.length() )
        return false;

    for (int i = 0; i < a.length(); i++) {
        if ( a[i] != b[i] && ( !is_vowel(a[i]) || !is_vowel(b[i]) ) )
            return false;
    }

    return true;
}
