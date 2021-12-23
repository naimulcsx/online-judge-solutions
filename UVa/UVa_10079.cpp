#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;

int main () {
    lli n;

    while(cin >> n && n >= 0)
        cout << 1 + n * (n + 1) / 2 << endl;
    
    return 0;
}
