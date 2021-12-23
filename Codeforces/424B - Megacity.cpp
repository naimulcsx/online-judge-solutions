#include <bits/stdc++.h>
using namespace std;

struct info { double d; int p; };

inline double distance(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif  

    int n, s;
    cin >> n >> s;

    info data[n];
    for(int i = 0; i < n; ++i) {
        int a, b, p;
        cin >> a >> b >> p;
        data[i].d = distance(a, b);
        data[i].p = p;
    }

    sort(data, data + n, [](info a, info b) {
        return a.d < b.d;
    });

    bool flag = false;
    double maxdis = numeric_limits<double>::min();
    for (int i = 0; i < n; ++i) {
        maxdis = max(maxdis, data[i].d);
        s += data[i].p;
        if (s >= 1000000) {
            flag = true;
            break;
        }
    }

    if (flag) cout << fixed << setprecision(8) << maxdis << endl;
    else cout << -1 << endl;
    return 0;
}
