#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    // take input
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // sort the array
    sort(arr, arr + n);

    bool flag = false;
    int i = 0, j =  i + 1, k = j + 1;

    // loop until the third last element
    while( i < n - 2 ) {
        // if sum of first two side is greater than the third one
        if ( arr[i] + arr[j] > arr[k] ) {
            flag = true;
            break;
        }

        // move ahead
        else i++, j++, k++;
    }

    if ( flag ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
