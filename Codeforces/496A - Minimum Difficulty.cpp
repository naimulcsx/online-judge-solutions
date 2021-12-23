#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    for (auto &el: arr) scanf("%d", &el);

    int i = 0, mn_dis = 99999999, exclude;
    while(i < n - 2) {
        if ( arr[i + 2] - arr[i] < mn_dis ) {
            mn_dis = arr[i + 2] - arr[i];
            exclude = i + 1;
        }
        ++i;
    }

    vector<int> res;
    for (int i = 0; i < n; ++i) 
        if (i != exclude) res.push_back(arr[i]);

    int ans = 0;
    for (int i = 0; i < n - 2; ++i) ans = max(ans, res[i + 1] - res[i]);
    printf("%d\n", ans);
    return 0;
}
