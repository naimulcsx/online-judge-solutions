#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    ll yellow_crys, blue_crys, yellow, blue, green;
    cin >> yellow_crys >> blue_crys >> yellow >> green >> blue;


    ll yellow_crys_needed = yellow * 2 + green;
    ll blue_crys_needed = blue * 3 + green;
    cout << max(yellow_crys_needed - yellow_crys, 0ll) + max(blue_crys_needed - blue_crys, 0ll) << endl;
    return 0;
}
