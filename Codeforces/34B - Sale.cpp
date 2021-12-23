#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int count = 0;
    sort(arr, arr + n);
    for ( int i = 0; i < m; ++i )
        if ( arr[i] < 0 )
            count += arr[i] * (-1);

    cout << count << endl;
    return 0;
}
