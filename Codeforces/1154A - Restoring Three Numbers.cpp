#include <bits/stdc++.h>
using namespace std;


int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    ios::sync_with_stdio(false);
    vector<int> vec(4);
    for (auto &el: vec) cin >> el;
    sort(vec.begin(), vec.end());
    cout << vec[3] - vec[2] << ' ' << vec[3] - vec[1] << ' ' << vec[3] - vec[0] << endl;
    return 0;
}
