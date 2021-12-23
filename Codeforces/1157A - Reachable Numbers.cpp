#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int cnt = 0, p = n;
    unordered_map<int, bool> marks;

    n++;
    while( true ) {
        while ( n % 10 == 0 ) n /= 10;
        if ( marks[n] ) break;
        marks[n] = true;
        cnt++;
        n++;
    }

    if (!marks[p]) cnt++;
    cout << cnt << endl;
    return 0;
}
