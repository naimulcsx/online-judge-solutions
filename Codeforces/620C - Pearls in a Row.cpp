#include <bits/stdc++.h>
using namespace std;

int arr[300100];
unordered_map<int, bool> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

    int st = 1;
    vector<pair<int, int>> res;     
    for (int i = 0; i < n; ++i) {
        if ( mp.count(arr[i]) ) {
            res.push_back({st , i + 1});
            st = i + 2;
            mp.clear();
        } else mp[arr[i]] = 1;
    }

    if ( res.size() == 0 ) printf("-1\n");
    else {
        int sz = res.size();
        res[sz - 1].second = n;
        printf("%d\n", sz);
        for (auto el: res) printf("%d %d\n", el.first, el.second);
    }
    
    return 0;   
}
