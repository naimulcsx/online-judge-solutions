#include<bits/stdc++.h>
using namespace std;
int cnt[1005];

int main() {
    int n, mx = 0;
    cin >> n;
    vector<int> arr(n);
    for ( auto &el: arr ) cin >> el, cnt[el]++;
    for (int i = 1; i <= 1000; ++i) mx = max(mx, cnt[i]);
    
    if ( mx <= (n / 2) + (n % 2) ) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
