#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int calc(char from, char to) {
    int res = abs(to - from);
    if (res > 13) return 26 - res;
    return res;
}

int main() {
    int n;
    string str;
    cin >> n >> str;

    int mn = numeric_limits<int>::max();
    for (int i = 0; i < n - 3; ++i) {
        int res = calc(str[i], 'A') + calc(str[i + 1], 'C');
        res += calc(str[i + 2], 'T') + calc(str[i + 3], 'G');
        mn = min(mn, res);
    }

    cout << mn << endl;
    return 0;
}
