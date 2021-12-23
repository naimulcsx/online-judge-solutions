#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, input;
    cin >> n;

    map<int, bool> marks;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if ( !marks.count(input) ) 
            marks.insert( {input, true} );
    }

    int count = 0;
    for ( int i = 1; i <= n; ++i )
        if ( !marks[i] )
            count++;

    cout << count << endl;
    return 0;
}
