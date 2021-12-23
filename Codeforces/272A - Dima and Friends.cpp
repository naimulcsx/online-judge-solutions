#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int el;
        cin >> el;
        cnt += el;
    }

    int dima = 0;
    for (int i = 1; i <= 5; ++i) {
        int tot = cnt + i;
        if ( tot % (n + 1) == 1 ) dima++;
    }

    cout << 5 - dima << endl;
    return 0;   
}
