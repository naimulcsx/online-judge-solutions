#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

bool is_coprime(int a, int b) {
    return gcd(a, b) == 1;
}

auto main() -> int {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int first = n - 1, second = 1;
    pair<int, int> res;

    while(first > second) { 
        if ( is_coprime(first, second) )
            res.first = second, 
            res.second = first;

        first--, second++;
    }

    cout << res.first << " " << res.second << endl;
    return 0;
}
