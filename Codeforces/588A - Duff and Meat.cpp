#include <iostream>
using namespace std;
struct info { int needed, price; };

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    struct info data[n]; 
    int minimum = 1000000001, min_pos;

    for ( int i = 0; i < n; ++i ) {
        cin >> data[i].needed >> data[i].price;

        // get the minimum price
        if ( data[i].price < minimum ) {
            minimum = data[i].price;
            min_pos = i;
        }
    }

    // total before the minimum price
    int i = 0, total = 0;
    while ( i < n - 1 ) {
        bool flag = false;
        int l = i, m = i + 1;
        
        // loop until price is lower or equal
        while( m < n && data[l].price <= data[m].price ) 
            m++, flag = true;
        
        // calucate price from l to m - 1, with l as price
        for (int k = l; k < m; ++k)
            total += data[l].price * data[k].needed;

        if ( flag ) i = m;
        else ++i;
    }

    // if the minimum price is on the last day
    if ( min_pos == n - 1 ) 
        total += data[min_pos].needed * data[min_pos].price;

    cout << total << endl;
    return 0;
}
