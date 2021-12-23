#include <bits/stdc++.h>
using ll = long long;
using namespace std;

unordered_map<string, int> mp;

int main() {
    
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    while( n-- ) {
        string str;
        cin >> str;

        if ( !mp.count(str) ) {
            cout << "OK" << endl;
            mp[str] = 1;
        } else {
            string res = str + to_string(mp[str]);
            cout << res << endl;
            mp[str]++;
            mp[res] = 1;
        }
    }

    return 0;
}

