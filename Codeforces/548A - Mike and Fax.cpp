#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int n;
    string str;
    cin >> str >> n;
    vector<string> parts;

    if (len(str) % n != 0) cout << "NO" << endl;
    else {
        int part_len = len(str) / n;
        int i = 0;

        while( i < len(str) ) {
            string por = str.substr(i, part_len), rev;
            rev = por;
            reverse(begin(rev), end(rev));
            if (rev != por) {
                cout << "NO" << endl;
                return 0;
            }
            i += part_len;
        }
        
        cout << "YES" << endl;
    }

    return 0;
}
