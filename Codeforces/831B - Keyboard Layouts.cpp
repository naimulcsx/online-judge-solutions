#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    string s1, s2;
    cin >> s1 >> s2;
    unordered_map<char, char> m;
    for (int i = 0; i < 26; ++i) {
        m.insert({ s1[i], s2[i] });
        m.insert({ toupper(s1[i]), toupper(s2[i]) });
    }

    string text;
    cin >> text;
    for (int i = 0; i < (int) text.length(); ++i)
        if (isalpha(text[i])) cout << m[text[i]];
        else cout << text[i];
    cout << endl;
    return 0;
}

