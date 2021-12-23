#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    string heading, text;
    getline(cin, heading);
    getline(cin, text);

    unordered_map<char, int> freq;
    for (int i = 0; i < heading.length(); ++i)
        freq[heading.at(i)]++;

    
    bool flag = true;
    for (char ch: text) {
        if (!isspace(ch)) {
            bool exists = freq.count(ch);
            if (!exists || (exists && freq[ch] == 0)) {
                flag = false;
                break;
            }
            freq[ch]--;
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
