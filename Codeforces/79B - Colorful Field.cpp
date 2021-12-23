#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    int x, y;
    map< int , vector<int > > waste;
    for (int i = 0; i < k; ++i) {
        cin >> x >> y;

        // when x is not found, insert it, with a empty vector
        if ( !waste.count(x) ) {
            vector<int> temp;
            waste.insert( {x, temp} );
        }

        waste[x].push_back(y);
    }

    // waste_count keeps track of in each row, how many wastes are there
    vector<int> waste_count(n + 1, 0);
    for ( auto it = waste.begin(); it != waste.end(); ++it )
        waste_count[it->first] = it->second.size();


    // prefix sum
    // waste_count[4] means how many wastes are there from 1st to 4'th row
    for ( int i = 1; i < n + 1; ++i )
        waste_count[i] += waste_count[i - 1];


    for (int i = 0; i < t; ++i) {
        cin >> x >> y;

        // if y is found inside the waste[x] vector
        // x, y represets an wasted cell
        if ( find( waste[x].begin(), waste[x].end(), y ) != waste[x].end() )
            cout << "Waste" << endl;

        
        else {
            // count the number of wastes from 1st to x'th row
            int count = waste_count[x];

            // decrement the number of wastes after y
            for ( int i = 0; i < waste[x].size(); ++i )
                if ( y < waste[x][i] )
                    count--;

            // total cells from (1, 1) to (x, y)
            int total = x * m - (m - y), 
        
            // substracting number of wastes
            // gives us the exact number of white cells
            res = total - count; 

            // print result
            switch( res % 3 ) {
                case 0: cout << "Grapes" << endl; break;
                case 1: cout << "Carrots" << endl; break;
                case 2: cout << "Kiwis" << endl; break;
            }
        }
    }
    
    return 0;
}
