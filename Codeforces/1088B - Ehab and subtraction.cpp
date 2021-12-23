#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);
    int *end = unique( arr, arr + n ), *begin = arr;


    int min_pos = 0, temp = 0, res = 0;
    while(q--) {
        if (begin < end) {
            res = arr[min_pos] + temp;
            temp -= res;
            min_pos++;
            begin++;
            cout << res << endl;
        }
        else cout << 0 << endl;
    }

    return 0;
}
