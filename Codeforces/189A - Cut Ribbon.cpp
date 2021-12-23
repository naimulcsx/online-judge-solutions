#include <bits/stdc++.h>
using namespace std;

vector<int> coins(3);

int dp[4][4010];
bool vis[4][4010];

int func( int pos, int left )  {
    if (left == 0) return 0;
    if (pos == 3) return -1e8;

    if (vis[pos][left]) return dp[pos][left];
    vis[pos][left] = 1;

    int p = -1e8, q = -1e8;
    if ( left - coins[pos] >= 0 )
        p = func(pos, left - coins[pos]) + 1;

    q = func(pos + 1, left);

    return dp[pos][left] = max(p, q);
}

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (auto &el: coins) cin >> el;
    cout << func(0, n) << endl;
    return 0;
}
