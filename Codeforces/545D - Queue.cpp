#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100100];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort( arr, arr + n ) ;

    int time_waited = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        if ( time_waited <= arr[i] )
            cnt++, time_waited += arr[i];
    }
    cout << cnt << endl;
    return 0;
}
