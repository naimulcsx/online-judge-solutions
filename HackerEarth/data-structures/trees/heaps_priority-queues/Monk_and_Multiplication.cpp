/*
Problem link:
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    priority_queue<ll> q;
    int size = 0;
    for (int i = 0; i < n; ++i) {
        ll num; 
        cin >> num, size++;
        q.push(num);

        if ( size < 3 ) cout << -1 << endl;
        else {
            ll a = q.top();  q.pop();
            ll b = q.top();  q.pop();
            ll c = q.top();  q.pop();
            q.push(a);  q.push(b); q.push(c);            
            cout << a * b * c << endl;
        }
    }
    
    return 0;
}
