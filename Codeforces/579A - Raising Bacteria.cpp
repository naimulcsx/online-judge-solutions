#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, count = 0;
    cin >> n;
    
    // count number of 1's in the binary representation
    for (int i = 0; i < 32; ++i) {
        if ( (n & (1 << i)) == (1 << i) )
            count++;
    }

    cout << count << endl;
    return 0;
}
