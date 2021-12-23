#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);
    
    int count = 0;
    for (int i = 0; i < n; i += 2)
        count += arr[i + 1] - arr[i];

    cout << count << endl;
    return 0;
}
