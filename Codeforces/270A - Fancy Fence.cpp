#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> polygon_angles;
    for ( int n = 2; n <= 360; n++ )
        if (360 % n == 0)
            polygon_angles.push_back( 180 - (360 / n) );

    while(t--) {
        int a;
        cin >> a;

        if (find(polygon_angles.begin(), polygon_angles.end(), a) != polygon_angles.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
