#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    int m, b, p, total = 0, total_p;
    cin >> m >> b >> p;
    total_p = m * p;

    while(1) {
        int k = [](int n) -> int {
            int i = 1, res = pow(2, 0);
            while (1) {
                int temp = pow(2, i);
                if (temp > n) break;
                res = temp;
                i++;
            }
            return res;
        }(m);

        int matches = k / 2;
        total += matches * (2 * b); // participants
        total += matches; // judges
        m = (k / 2) + (m - k);
        if (matches == 0)  break;
    }

    cout << total << " " << total_p << endl;
    return 0;
}
