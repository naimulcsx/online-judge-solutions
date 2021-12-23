#include <iostream>
using namespace std;

void prefix_sum(int *, int);

int main(void) {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
        

    prefix_sum(arr, n);
    int min = arr[k - 1], min_pos = 0;

    for ( int i = 0; i < n - k; ++i ) {
        if ( arr[i + k] - arr[i] < min )
            min = arr[i + k] - arr[i],
            min_pos = i + 1;
    }

    cout << min_pos + 1 << endl;
    return 0;
}

void prefix_sum(int *arr, int n) {
    for (int i = 1; i < n; ++i)
        arr[i] += arr[i - 1];
}
