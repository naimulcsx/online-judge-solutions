#include <bits/stdc++.h>
using namespace std;
using ulli = unsigned long long int;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    ulli sum = 0,input, min_odd = numeric_limits<ulli>::max(), odd_count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        sum += input;
        if (input % 2 == 1) {
            odd_count++;
            min_odd = min(min_odd, input);
        }
    }

    if (odd_count % 2 == 0) cout << sum << endl;
    else cout << sum - min_odd << endl;
    return 0;
}
