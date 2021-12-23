#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for ( auto &el: arr ) cin >> el;

    int mx = 0;
    deque<int> max_q;
    for (auto it = rbegin(arr); it != rend(arr) - 1; ++it) {
        mx = max( *it, mx );
        max_q.push_front(mx);
    }
    max_q.push_back(0);

    for (int i = 0; i < (int) arr.size(); ++i) {
        if ( max_q[i] < arr[i] ) cout << 0 << " ";
        else cout << max_q[i] - arr[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}
