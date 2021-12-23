#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, a, b;
    cin >> n >> a >> b;
    
    int front = 0, behind = n - 1, count = 0;
    for (int i = 1; i <= n; ++ i) {
        if (front >= a && behind <= b) count++;
        front++;
        behind--;
    }

    cout << count << endl;
    return 0;
}

