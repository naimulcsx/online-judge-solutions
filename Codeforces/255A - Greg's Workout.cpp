#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, input, count = 1;
    cin >> n;

    int chest = 0, biceps = 0, back = 0;
    while(n--) {
        cin >> input;
        if (count % 3 == 0) back += input;
        else if (count % 3 == 2) biceps += input;
        else if (count % 3 == 1) chest += input;
        count++;
    }

    int mx = max(chest, max(biceps, back));

    if (mx == chest) cout << "chest" << endl;
    else if (mx == biceps) cout << "biceps" << endl;
    else if (mx == back) cout << "back" << endl;

    return 0;
}
