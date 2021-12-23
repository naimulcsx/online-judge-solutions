#include <bits/stdc++.h>
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int q;
    cin >> q;

    while(q--) {
        int n;
        string str;
        cin >> n >> str;

        bool flag = true;
        int i = 0, j = n - 1, mid = n / 2;
        while( i < mid ) {
            if ( str[i] == str[j] ) {
                i++, j--;
                continue;
            } else if ( abs(str[i] - str[j]) != 2 ) {
                flag = false;
                break;
            }

            i++, j--;
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
