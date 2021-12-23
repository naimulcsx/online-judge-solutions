#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (auto &el: arr) cin >> el;

    sort(begin(arr), end(arr), [](string a, string b) { 
        return a.size() < b.size(); 
    });

    string pass;
    cin >> pass;

    bool flag = false;
    int pass_len = len(pass), res1, res2;

    for (int i = 0; i < len(arr); ++i) {
        int l = arr[i].length();
        if ( l == pass_len ) {
            if ( !flag ) {
                res1 = i;
                res2 = i;
                flag = true;
            } else res2 = i;
        }
    }

    cout << (res1 + (res1 / m) * 5) + 1 << ' ' << (res2 + (res2 / m) * 5) + 1 << endl;
    return 0;
}
