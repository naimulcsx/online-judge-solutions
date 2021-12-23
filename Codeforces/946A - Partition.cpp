#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int sum_a = 0, sum_b = 0, input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input < 0) sum_b += input;
        else sum_a += input; 
    }

    cout << sum_a - sum_b << endl;
    return 0;
}
