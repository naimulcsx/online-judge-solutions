#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            if (arr[i][j] == 'X' && arr[i][j] == arr[i - 1][j - 1] 
            && arr[i][j] == arr[i - 1][ j + 1] && arr[i][j] == arr[i + 1][j - 1] 
            && arr[i][j] == arr[i + 1][j + 1]) count++;
        }
    }

    cout << count << endl;
    return 0;
}
