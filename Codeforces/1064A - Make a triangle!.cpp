#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int side_len[3];
    for (int i = 0; i < 3; ++i) 
        cin >> side_len[i];

    sort(side_len, side_len + 3);

    if ( side_len[0] + side_len[1] > side_len[2] )
        cout << 0 << endl;
    else
        cout << side_len[2] - (side_len[0] + side_len[1]) + 1 << endl;

    return 0;
}
