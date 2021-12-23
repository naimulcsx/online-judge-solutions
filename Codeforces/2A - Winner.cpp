#include <bits/stdc++.h>
using namespace std;

struct single { string name; int point; };

int main() {
    int q, mx = INT_MIN;
    cin >> q;
    single data[q];
    unordered_map<string, int> score, temp;

    for ( int i = 0; i < q; ++i ) {
        cin >> data[i].name >> data[i].point;
        score[ data[i].name ] += data[i].point;
    }

    // get the max score
    for (auto el: score) 
        mx = max(mx, el.second);

    // mark the winners
    unordered_map<string, bool> winner;
    for ( auto el: score )
        if ( el.second == mx ) 
            winner[ el.first ] = true; 

    // find out the winner
    for ( int i = 0; i < q; ++i ) {
        temp[ data[i].name ] += data[i].point;
        if ( temp[ data[i].name ] >= mx && winner[ data[i].name ] ) {
            cout << data[i].name << endl;
            break;
        }
    }

    return 0;
}
