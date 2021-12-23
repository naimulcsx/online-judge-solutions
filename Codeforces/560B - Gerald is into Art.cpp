#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    bool flag = a2 + a3 <= b1 && max(b2, b3) <= a1;
    flag |= a2 + a3 <= a1 && max(b2, b3) <= b1;
    flag |= b2 + b3 <= a1 && max(a2, a3) <= b1;
    flag |= b2 + b3 <= b1 && max(a2, a3) <= a1;
    flag |= a2 + b3 <= b1 && max(b2, a3) <= a1;
    flag |= a2 + b3 <= a1 && max(b2, a3) <= b1;
    flag |= b2 + a3 <= b1 && max(b3, a2) <= a1;
    flag |= b2 + a3 <= a1 && max(b3, a2) <= b1;

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
