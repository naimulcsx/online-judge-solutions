#include <bits/stdc++.h>
using namespace std;

pair<bool, int> is_valid_progression(vector<int> &arr) {
    int l = arr.size();
    if (l == 1) return {true, 0};

    unordered_set<int> prof_diff;
    for (int i = 0; i < l - 1; ++i) {
        prof_diff.insert( arr[i + 1] - arr[i] );
    }

    return {prof_diff.size() == 1, arr[1] - arr[0]};
}
 
int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n;
    map<int, vector<int>> data;

    for (int i = 1; i <= n; ++i) {
        cin >> k;
        data[k].push_back(i);
    }

    vector<pair<int, int>> valid;
    for (auto el: data) {
        pair<int, int> res = is_valid_progression(el.second);
        if (res.first) valid.push_back({el.first, res.second});   
    }

    cout << valid.size() << endl;
    for (auto el: valid) {
        cout << el.first << ' ' << el.second << endl;
    }

    return 0;   
}
