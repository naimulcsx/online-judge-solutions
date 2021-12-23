#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {return a.first < b.first;}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(begin(arr), end(arr), comp); 

    int sum = 0, i = 0;
    vector<pair<int, int>> res;
    while( sum < m && i < n ) {
        sum += arr[i].first;
        if (sum > m) break;
        res.push_back(arr[i]);
        ++i;
    }
    
    cout << i << endl;
    for (auto el: res) cout << el.second << ' ';
    cout << endl;

    return 0;
}
