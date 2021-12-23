#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char ch) {
    string vowels = "aeiou";
    return binary_search(vowels.begin(), vowels.end(), ch);
}

bool is_valid(string s) {
    for (int i = 0; i < int(s.length()); ++i) {
        if (s[i] == 'n') continue;
        if ( is_vowel(s[i]) ) continue;
        else {
            if (i + 1 >= (int) s.length()) return false;
            else if ( !is_vowel(s[i + 1]) ) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    string s;
    cin >> s;
    if (is_valid(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
