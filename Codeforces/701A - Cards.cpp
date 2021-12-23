#include <bits/stdc++.h>
using namespace std;
struct info {int val, pos;};

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    info data[n];
    for (int i = 0; i < n; ++i)
        cin >> data[i].val,
        data[i].pos = i;


    sort(data, data + n, [](info a, info b) {
        return a.val < b.val;
    }); 

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
        cout << data[i].pos + 1 << " " << data[j].pos + 1 << endl;
    return 0;
}
