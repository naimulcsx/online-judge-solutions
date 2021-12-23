#include <bits/stdc++.h>
using namespace std;

int arr[5];
int main() {
    ios::sync_with_stdio(false);
    int sum = 0;
    for (auto &el: arr) cin >> el, sum += el;
    if ( sum > 0 && sum % 5 == 0 ) cout << sum / 5 << endl;
    else cout << -1 << endl;
    return 0;   
}
