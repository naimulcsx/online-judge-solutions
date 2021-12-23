#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio( false );
    int n;
    string s;
    cin >> n >> s;

    int arr[n];
    for ( int i = 0; i < n; ++i )
        cin >> arr[i];

    bool found = false;
    int mn = 1000000001;
    for ( int i = 0; i < n - 1; ++i )
        if ( s[i] == 'R' && s[i + 1] == 'L' ) 
            found = true,
            mn = min( mn, arr[i + 1] - arr[i] );

    if ( found )
        cout << mn / 2 << endl;
    else
        cout << -1 << endl;
    return 0;
}
