#include <bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    string s;
    cin >> n >> s;

    auto is_vowel = [&](char ch) -> bool {
        string vowels= "aeiouy";
        return vowels.find(ch) != string::npos;
    };

    int i = 0; string res = "";
    while(i < n) {
        int j = i, k = i + 1;
        while( k < n && is_vowel( s[j] ) && is_vowel( s[k] ) ) j++, k++;
        res += s[i];
        i = k;

    }

    cout << res << endl;
    return 0;
}
