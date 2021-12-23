#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    string s;
    deque<char> res;
    cin >> n >> s;

    int middle, i = 1, count = 1;
    res.push_back( s[0] );

    if (n % 2 == 0) {
        res.push_back( s[1] );
        i = 2;
    }

    while ( i < n ) {
        
        if ( count % 2 == 1 ) 
            res.push_front( s[i] );
        else
            res.push_back( s[i] );

        ++i, ++count;
    }

    for (int i = 0; i < res.size(); ++i) 
        cout << res[i];
    cout << endl;

    return 0;
}