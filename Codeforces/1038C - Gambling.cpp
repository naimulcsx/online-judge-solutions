#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int q;
    cin >> q;
    vector<int> a(q), b(q);

    // input lists
    for (auto &el: a) cin >> el;
    for (auto &el: b) cin >> el;

    // sort lists
    sort( begin(a), end(a) );
    sort( begin(b), end(b) );


    ll a_score = 0, b_score = 0, turn = 1;
    while( a.size() > 0 || b.size() > 0 ) {
        
        // player a's turn
        if ( turn % 2 == 1 ) {
            if ( a.empty() )  b.pop_back();
        
            // if player a's last elem is greater than player b's last elem
            // he takes his own and remove the elem
            else if ( a.back() > b.back() || b.empty() ) {
                a_score += a.back();
                a.pop_back();
            } 

            // else, he deletes his opponents last elem
            else b.pop_back();
        } 

        else {
            if ( b.empty() ) a.pop_back();
            
            // if player b's last elem is greater than player a's last elem
            // he takes his own and remove the elem
            else if ( b.back() > a.back() || a.empty() ) {
                b_score += b.back();
                b.pop_back();
            } 

            // else, he deletes his opponents last elem
            else a.pop_back();
        }

        turn++;
    }

    cout << a_score - b_score << endl;
    return 0;
}
