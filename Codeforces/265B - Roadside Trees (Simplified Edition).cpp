#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;
    

    int time = arr[0] + 1;

    for (int i = 0; i < n - 1; ++i) {
        if ( arr[i + 1] >= arr[i] ) {
            time += (arr[i + 1] - arr[i]) + 2;
        } else {
            time += abs(arr[i + 1] - arr[i]) + 2;
        }
    }

    cout << time << endl;
    return 0;
}
