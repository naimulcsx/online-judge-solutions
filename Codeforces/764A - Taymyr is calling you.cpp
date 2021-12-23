#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, m, z;
    cin >> n >> m >> z;

    int count = 0;
    for (int i = 1; i <= z; ++i)
        if(i % m == 0 && i % n == 0) count++;
        
    cout << count << endl;
    return 0;
}
