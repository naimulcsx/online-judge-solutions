#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    bool flag = true;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == 3 && arr[i + 1] == 2) flag = false;
        else if (arr[i] == 2 && arr[i + 1] == 3) flag = false;
    }

    if ( flag ) {
        cout << "Finite" << endl;
        int tot = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] == 2 && arr[i + 1] == 1) tot += 3;
            else if (arr[i] == 1 && arr[i + 1] == 3) tot += 4;
            else if (arr[i] == 3 && arr[i + 1] == 1) tot += 4;
            else if (arr[i] == 1 && arr[i + 1] == 2) {
                if ( i > 0 && arr[i - 1] == 3 )  tot += 2;
                else tot += 3;
            }
        }
        cout << tot << endl;
    } 
    else cout << "Infinite" << endl;
    return 0;
}
