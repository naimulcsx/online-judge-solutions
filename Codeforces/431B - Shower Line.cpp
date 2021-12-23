#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    int arr[6][6];
    for (int i = 1; i <= 5; ++i)
        for (int j = 1; j <= 5; ++j)
            cin >> arr[i][j];


    vector<int> order { 1,2,3,4,5 };
    int mx = 0;
    do {
        int res = 0,
            first = order[0],
            second = order[1],
            third = order[2],
            fourth = order[3],
            fifth = order[4];

        // before first person waits for shower
        res += (arr[first][second] + arr[second][first]); // first person talking with second
        res += (arr[third][fourth] + arr[fourth][third]); // third person talking with third

        // before second person waits for shower
        res += arr[second][third] + arr[third][second]; // second person talks with third
        res += arr[fourth][fifth] + arr[fifth][fourth]; // fourth person talking with fifth

        // before third person waits for shower
        res += (arr[third][fourth] + arr[fourth][third]); // third person talking with third

        // before fourth person waits for shower
        res += arr[fourth][fifth] + arr[fifth][fourth]; // fourth person talking with fifth

        // take the max
        mx = max(res, mx);

    } while ( next_permutation(order.begin(), order.end()) );

    cout << mx << endl;
    return 0;
}
