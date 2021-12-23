#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int arr [n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int mx = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; ++i)
        mx = max(mx, arr[i + 1] - arr[i]);

    if ( arr[0] != 0 )
        mx = max( mx, arr[0] * 2 );
    if ( arr[n - 1] != l )
        mx = max( mx, (l - arr[n - 1]) * 2 );


    cout << fixed << setprecision(10) << (double) mx / 2 << endl;
    return 0;
}
