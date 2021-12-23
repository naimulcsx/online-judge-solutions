#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {

    int n;
    string str;
    cin >> n >> str;
    
    int i = 0, res = 0;
    while( i < n ) {
        if ( str[i] != 'x' ) {
            i++;
            continue;
        }

        int j = i + 1;
        while(j < n && str[j] == str[i]) j++;
        if ( j - i > 2 ) res += (j - i) - 2;
        i = j;
    }

    cout << res << endl;
    return 0;
} 