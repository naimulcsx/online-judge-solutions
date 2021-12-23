#include <bits/stdc++.h>
using namespace std;

int cnt[110];

int main() {
    int n;
    string str;
    cin >> n >> str;

    int sum = 0;
    for (auto el: str) sum += el - '0', cnt[el]++;

    if ( sum >= n ) cout << "0" << endl;
    else {
        
        int i = '0', res = 0;
        while ( i <= '9' ) {
            if ( cnt[i] == 0 ) { ++i; continue; }
            if ( sum >= n ) break;
            
            sum += (9 - (i - '0')); 
            cnt[i]--;
            res++;
        }

        cout << res << endl;
    }
    

    return 0;
}