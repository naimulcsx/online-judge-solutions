#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    #endif

    int two, three, five, six;
    cin >> two >> three >> five >> six;


    int count_256 = min( two, min(five, six) );
    two -= count_256;
    int count_32 = min(two, three);

    cout << 256 * count_256 + 32 * count_32 << endl;
    return 0;
}
