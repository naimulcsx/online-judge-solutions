#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);

    int i = 0, j = n - 1, min_difference = numeric_limits<int>::max();

    while(i < m && j < m) {
        if ( arr[j] - arr[i] < min_difference )
            min_difference = arr[j] - arr[i];

        i++, j++;
    }

    cout << min_difference << endl;
    return 0;
}
