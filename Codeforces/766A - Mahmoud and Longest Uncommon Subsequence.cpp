#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {return (a > b) ? a : b;}

int main() {
    string a, b;
    cin >> a >> b;

    if ( a == b )
        cout << -1 << endl;
    else
        cout << max(a.length(), b.length()) << endl;
    
    return 0;
}
