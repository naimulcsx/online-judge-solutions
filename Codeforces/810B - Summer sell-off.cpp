#include <bits/stdc++.h>
using namespace std;

using ll = long long;
struct info { int products, customers; ll max_sell; };

int main() {
    ios::sync_with_stdio(false);

    int n, f;
    cin >> n >> f;

    info data[n];
    for (int i = 0; i < n; ++i) {
        cin >> data[i].products >> data[i].customers;

        // count the maximum sell possible that day
        if ( data[i].products * 2 >= data[i].customers )
            data[i].max_sell = data[i].customers;
        else
            data[i].max_sell = data[i].products * 2;
    }

    sort( data, data + n, [](info a, info b) {
        /* products customers  max_sell
                3       6        6
                6       6        6
                2       6        4

            we should choose the 1st and the 3rd day, to maximize sell,
            so we need to sort is decending order by ( max_sell - products )
        */

        return ( a.max_sell - a.products ) > ( b.max_sell - b.products );
    });

    int i; 
    ll total_sell = 0;

    // totals for the first f days
    for ( i = 0; i < f; ++i )
        total_sell += data[i].max_sell;

    // totals for the rest of the days
    while( i < n ) {
        if ( data[i].products >= data[i].customers )
            total_sell += data[i].customers;

        else
            total_sell += data[i].products;
        i++;
    }

    // result
    cout << total_sell << endl;
    return 0;
}
