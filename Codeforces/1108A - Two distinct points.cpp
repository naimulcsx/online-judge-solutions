#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    while(n--) {
        int l1, l2, r1, r2; 
        cin >> l1 >> r1 >> l2 >> r2;
        int a = (l1 + r1 )/ 2;
        int b = (l2 + r2) / 2;
        if (a == b) b++;
        cout << a << " " << b << endl;
    }
    
    return 0;
}
