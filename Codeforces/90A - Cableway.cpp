#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    vector<int> arr(3);
    arr[0] = r / 2 + r % 2;
    arr[1] = g / 2 + g % 2;
    arr[2] = b / 2 + b % 2;

    int k = 0, res = 0;
    while ( true ) {
        int cnt = count(begin(arr), end(arr), 0);
        if ( cnt == 3 ) break;
        if (arr[k % 3] > 0) arr[k % 3]--;
        res++;
        ++k;
    }   

    cout << 30 + res - 1 << endl;
    return 0;
}
