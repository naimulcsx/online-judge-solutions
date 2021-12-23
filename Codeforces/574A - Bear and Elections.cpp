#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int res = 0;
    priority_queue<int> pq;
    for (int i = 0; i < n - 1; ++i) {
        int k; cin >> k;
        pq.push(k);
    }

    while( !pq.empty() ) {
        int top = pq.top(); 
        pq.pop();
        if (top >= m ) {
            res++;
            m++;
            pq.push(--top);
        }
    }
    
    cout << res << endl;
    return 0;
}
