#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    string vowels = "aeiou";
    return vowels.find(ch) != string::npos;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size()) cout << "No" << endl;
    else {
        bool flag = true;
        for (int i = 0; i < s1.size(); ++i) {
            if ( isVowel(s1[i]) && !isVowel(s2[i]) ) flag = false;
            else if ( !isVowel(s1[i]) && isVowel(s2[i]) ) flag = false;
        }

        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
