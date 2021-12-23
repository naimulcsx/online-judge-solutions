#include<bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        if (__gcd(a, b) == 1) cout << "Finite" << endl;
        else cout << "Infinite" << endl;
    }
   
    return 0;
}