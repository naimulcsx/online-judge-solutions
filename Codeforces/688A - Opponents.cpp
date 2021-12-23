#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, d;
    cin >> n >> d;
    string all_present(n, '1');

    int count = 0, cdays = 0;
    while(d--) {
        string day;
        cin >> day;

        if (day == all_present) 
            cdays = max(cdays, count), count = 0;
        else
            count++;
    }

    cdays = max(cdays, count);
    cout << cdays << endl;
    return 0;
}
