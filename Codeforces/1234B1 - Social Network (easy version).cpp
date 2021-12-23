#include <bits/stdc++.h>
using ll = long long;
using namespace std;


unordered_map<int, bool> marks;

int main() {
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    deque<int> q;
    for (int i = 0; i < n; ++i) {
        if ( marks[arr[i]] == 1 ) continue;
        if ( q.size() < k ) {
            q.push_front(arr[i]);
            marks[arr[i]] = 1;
        } else {
            marks[q.back()] = 0;
            q.pop_back();
            q.push_front(arr[i]);
            marks[arr[i]] = 1;
        }
    }

    cout << q.size() << endl ;
    for (auto el: q) cout << el << ' ';
    cout << endl;
    return 0;
}
