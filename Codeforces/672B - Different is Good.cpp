#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    string s;
    cin >> n >> s;

    if (n > 26) {
        cout << -1 << endl;
        return 0;
    }

    int count = 0;
    bool marks[26] {false};
    for (int i = 0; i < s.length(); ++i) {
        if (!marks[s[i] - 'a']) 
            marks[s[i] - 'a'] = true;

        else count++;
    }
    cout << count << endl;
    return 0;
}