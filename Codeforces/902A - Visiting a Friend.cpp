#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, m;
    scanf("%d %d", &n, &m);
    vector<pair<int, int>> arr(n + 1);
    arr.push_back({0, 0});
    for (int i = 1; i <= n; ++i) scanf("%d %d", &arr[i].first, &arr[i].second);

    int curr_pos = 0;
    for (int i = 0; i < n; ++i) {
        if ( arr[i + 1].first > curr_pos ) continue;
        curr_pos = max(curr_pos, arr[i + 1].second);
    }
    
    if (curr_pos >= m) printf("YES\n");
    else printf("NO\n");
    return 0;   
}
