#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    vector<int> vec;
    for (int i = 1; i <= 500; ++i)
        vec.push_back( (i * (i + 1)) / 2 );

    int n;
    cin >> n;
    if ( binary_search( vec.begin(), vec.end(), n) )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
