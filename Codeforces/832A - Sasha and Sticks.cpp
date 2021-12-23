#include <bits/stdc++.h>
using namespace std;
using ulli = unsigned long long int;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    #endif

    ulli n, k;
    cin >> n >> k;
  
    if ( (n / k) % 2 == 1 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
