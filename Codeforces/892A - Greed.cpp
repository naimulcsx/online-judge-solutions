#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> data(n);
    for (int i = 0; i < n; ++i) scanf("%d", &data[i].first);

    ll mx1 = 0, mx2 = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += data[i].first;
        scanf("%d", &data[i].second);

        if ( data[i].second >= mx1 )
            mx2 = mx1,
            mx1 = data[i].second;
        
        else if ( data[i].second <= mx1 && data[i].second >= mx2 ) 
            mx2 = data[i].second;
    }

    if (mx1 + mx2 >= sum) printf("YES");
    else printf("NO");
    return 0;
}
