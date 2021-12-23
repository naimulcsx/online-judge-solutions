#include <iostream>
#include <algorithm>
using namespace std;
using ulli = unsigned long long int;

int main(void) {
    ulli n, x;
    cin >> n >> x;

    ulli arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);

    ulli total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i] * x;
        if (x > 1) x--;
    }
    cout << total << endl;
    return 0;
}
