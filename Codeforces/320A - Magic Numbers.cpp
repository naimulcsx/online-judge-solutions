#include <bits/stdc++.h>
using namespace std;

int main() {
    string arr;
    cin >> arr;

    bool ok = true;
    int i = 0, len = arr.length();
    while( i < len ) {
        if ( i < len - 2 && arr[i] == '1' && arr[i + 1] == '4' && arr[i + 2] == '4') i += 3;
        else if ( i < len - 1 && arr[i] == '1' && arr[i + 1] == '4' ) i += 2;
        else if ( i < len && arr[i] == '1' ) i++;
        else {ok = false; break; }
    }

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
