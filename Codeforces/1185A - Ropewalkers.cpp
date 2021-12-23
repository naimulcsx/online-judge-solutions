#include <bits/stdc++.h>
using namespace std;

int arr[4];

int main() {
    int a, b, c, d;
    for (int i = 0; i < 3; ++i) cin >> arr[i];
    cin >> d;
    
    sort(arr, arr + 3);
    a = arr[0], b = arr[1], c = arr[2];
    
    int p = d - abs(a - b), q = d - abs(b - c);
    if (p < 0) p = 0;
    if (q < 0) q = 0;
    cout << p + q << endl;

    return 0;   
}
