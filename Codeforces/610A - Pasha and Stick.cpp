#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n & 1) cout << 0 << endl;
    else cout << (n / 4) - (n % 4 == 0 ? 1: 0) << endl;
    return 0;
}
