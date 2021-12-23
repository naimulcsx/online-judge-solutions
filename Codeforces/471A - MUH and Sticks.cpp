#include <bits/stdc++.h>
using ll = long long;
using namespace std;

unordered_map<int, int> mp;

int main() {
    
    for (int i = 1; i <= 6; ++i) {
        int l; 
        cin >> l;
        mp[l]++;
    }

    int mx = 0;
    for (auto el: mp) mx = max(mx, el.second);

    bool bear = false, elp = false;
    if ( mx == 4 && mp.size() == 3 ) bear = true;
    else if ( mx == 5 && mp.size() == 2 ) bear = true;
    else if ( mx == 6 && mp.size() == 1 ) elp = true;
    else if ( mx == 4 && mp.size() == 2 ) elp = true;
    

    if (bear) cout << "Bear" << endl;
    else if (elp) cout << "Elephant" << endl;
    else cout << "Alien" << endl;

    return 0;
}
