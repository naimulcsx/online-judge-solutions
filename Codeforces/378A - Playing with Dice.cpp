#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;

    int a_score = 0, b_score = 0, tie = 0;
    for (int i = 1; i <= 6; ++i) {
        if ( abs(i - a) == abs(i - b) ) tie++;
        else if ( abs(i - a) < abs(i - b) ) a_score++;
        else if ( abs(i - b) < abs(i - a) ) b_score++;
    }

    cout << a_score << " " << tie << " " << b_score << endl;
    return 0;
}
