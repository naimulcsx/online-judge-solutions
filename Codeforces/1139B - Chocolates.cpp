#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> arr(n);
    for ( auto &el: arr  ) cin >> el;

    int i = n - 1, j = n - 2;
    while( j >= 0 && arr[i] > arr[j] ) i--, j--;
    
    ll res = 0, lst = arr[i];
    for (int k = n - 1; k >= i; --k) res += arr[k];
    for (int k = i - 1; k >= 0; --k) {
        lst--;
        if ( lst <= 0 ) break;
        if (arr[k] >= lst ) res += lst;
        else if (arr[k] < lst ) res += arr[k], lst = arr[k];
        else break;
    }

    cout << res << endl;
    return 0;
}
