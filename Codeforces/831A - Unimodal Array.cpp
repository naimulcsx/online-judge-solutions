#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    int i = 1, j = n;
    while( i + 1 <= n && arr[i + 1] > arr[i] ) i++;
    while ( j - 1 >= 1 && arr[j] < arr[j - 1]) j--;

    for (int k = i + 1; k <= j; ++k) {
        if ( arr[k] != arr[i] ) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
