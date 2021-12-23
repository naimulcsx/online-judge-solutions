#include <bits/stdc++.h>
using namespace std;

string sol(int n, string str) {
    vector<string> data 
        {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

    int mx_match = 0;
    vector<pair<string, int>> res;

    for (auto el: data) {
        if ((int) el.length() == n) {
            // count the matches with e
            int match = 0;
            for (int i = 0; i < n; ++i) 
                if (str[i] == el[i]) match++;
            
            res.push_back({el, match});
            mx_match = max(mx_match, match);
        }
    }

    for (auto el: res) if (el.second == mx_match) return el.first;
    return "";
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    string s;
    cin >> n >> s;
    cout << sol(n, s) << endl;
    
    return 0;   
}
