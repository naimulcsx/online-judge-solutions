#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {


    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;


        int bame_jawa_jabe_na = INT_MIN;
        int upore_jawa_jabe_na = INT_MAX;
        int dane_jawa_jabe_na = INT_MAX;
        int niche_jawa_jabe_na = INT_MIN;

        for (int i = 0; i < n; ++i) {
            int x, y, f1, f2, f3, f4;
            cin >> x >> y >> f1 >> f2 >> f3 >> f4;

            if ( f1 == 0 ) 
                bame_jawa_jabe_na = max(bame_jawa_jabe_na, x);

            if ( f2 == 0 ) 
                upore_jawa_jabe_na = min(upore_jawa_jabe_na, y);

            if ( f3 == 0 )
                dane_jawa_jabe_na = min(dane_jawa_jabe_na, x);
            
            if ( f4 == 0 )
                niche_jawa_jabe_na = max(niche_jawa_jabe_na, y);
        }


        if ( bame_jawa_jabe_na > dane_jawa_jabe_na ) cout << "0" << endl;
        else if ( niche_jawa_jabe_na > upore_jawa_jabe_na ) cout << "0" << endl;
        else {
            
            cout << 1 << ' ';
            if (bame_jawa_jabe_na == INT_MIN && dane_jawa_jabe_na == INT_MAX) cout << 0 << ' ';
            else if (bame_jawa_jabe_na != INT_MIN) cout << bame_jawa_jabe_na << ' ';
            else if (dane_jawa_jabe_na != INT_MAX) cout << dane_jawa_jabe_na << ' ';
            
            if (upore_jawa_jabe_na == INT_MAX && niche_jawa_jabe_na == INT_MIN) cout << 0 << endl;
            else if (upore_jawa_jabe_na != INT_MAX) cout << upore_jawa_jabe_na << endl;
            else if (niche_jawa_jabe_na != INT_MIN) cout << niche_jawa_jabe_na << endl;
        }
    }

    return 0;
}
