#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const int MAX = 2e9;

int cost[101000];
unordered_map<string, int> str;
int min_cost[101000];

int main() {    
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    char cstr[25];
    for (int i = 1; i <= n; ++i) {
        string s;
        scanf("%s", cstr);
        s.assign(cstr);
        str[s] = i;
    }

    for (int i = 1; i <= n; ++i) cin >> cost[i];
    
    for (int i = 1; i <= m; ++i) {
        int k;
        scanf("%d", &k);

        int mn = MAX;
        vector<int> grp;
        for (int j = 1; j <= k; ++j) {
            int l;
            scanf("%d", &l);
            grp.push_back(l);
            mn = min(mn, cost[l]);
        }

        for (auto el: grp) min_cost[el] = mn;
    }

    ll cost = 0;
    for (int i = 1; i <= k; ++i) {
        string s;
        scanf("%s", cstr);
        s.assign(cstr);
        cost += min_cost[str[s]];
    }
    
    printf("%lld\n", cost);
    return 0;
}
