#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char ch) {
    string vowels = "AEIOUY";
    return vowels.find(ch) != string::npos;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;

    vector<int> d;
    d.push_back(0);
    for (int i = 0; i < s.length(); ++i)
        if (is_vowel( s[i] )) d.push_back(i + 1);

    d.push_back(s.length() + 1);

    int mx = 0;
    for (int i = 0; i < d.size() - 1; ++i)
        mx = max(d.at(i + 1) - d.at(i), mx);

    cout << mx << endl;
    return 0;
}
