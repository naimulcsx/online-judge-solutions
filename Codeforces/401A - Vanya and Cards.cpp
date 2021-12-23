#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, r;
    cin >> n >> r;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        sum += input;
    }

    int need = abs(sum), count = 0;

    for (int i = r; i >= 1; --i) {
        if (need < i) continue;
        if (need == 0) break;

        while(need >= i) {
            need -= i;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
