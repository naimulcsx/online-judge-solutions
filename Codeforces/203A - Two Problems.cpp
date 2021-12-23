#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, t, a, b, da, db;
    cin >> x >> t >> a >> b >> da >> db;
    vector<int> l1, l2;

    // I hate corner cases -_-
    if ( x == 0 ) {  
        cout << "YES" << endl;   
        return 0;
    }

    for (int i = 0; i < t; ++i) {
        l1.push_back(a), l2.push_back(b);
        a -= da, b -= db;
    }

    reverse(l1.begin(), l1.end());
    reverse(l2.begin(), l2.end());

    if ( binary_search(l1.begin(), l1.end(), x) ) { cout << "YES" << endl; return 0; }
    if ( binary_search(l2.begin(),l2.end(), x) ) { cout << "YES" << endl; return 0; }
    
    for (int i = 0; i < (int) l1.size(); ++i) {
        for (int j = 0; j < (int) l2.size(); ++j) {
            if ( l1[i] + l2[j] == x ) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}

