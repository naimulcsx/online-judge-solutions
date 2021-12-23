#include <bits/stdc++.h>
using namespace std;

int arr[5];

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    arr[n] = 1;
    for (int i = 0; i < 3; ++i) {
        int x, y;
        cin >> x >> y;
        swap(arr[x], arr[y]);
    }

    for (int i = 1; i <= 3; ++i)
        if (arr[i]) cout << i << endl;

    return 0;
}
