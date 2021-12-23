#include <bits/stdc++.h>
using namespace std;

int n, m;
int b, g, t;
int boys[200], girls[200];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m >> b;

    for (int i = 0; i < b; ++i) {
        cin >> t;
        boys[t] = 1;
    }

    cin >> g;
    for (int i = 0; i < g; ++i) {
        cin >> t;
        girls[t] = 1;
    }
    
    bool flag = true;
    int gcd = __gcd(n, m);

    if ( gcd == 1 && b == 0 && g == 0 ) flag = false;

    else if ( gcd > 1 ) {

        for (int i = 0; i < n * m; ++i) {
            if ( boys[i % n] || girls[i % m] )  {
                boys[i % n] = 1;
                girls[i % m] = 1;
            }
        }

        flag = count( boys, boys + n, 1 ) == n;
        flag &= count( girls, girls + m, 1 ) == m;
    }


    if ( flag ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;   
}
