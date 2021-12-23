#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt( (x1 - x2) * (x1 - x2) + (y1 - y2)* (y1 - y2) );
}

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    pair<int, int> prev;
    cin >> prev.first >> prev.second;

    double tm = 0.0;
    for (int i = 0; i < n - 1; ++i) {
        pair<int, int> t;
        cin >> t.first >> t.second;
        tm += distance(t.first, t.second, prev.first, prev.second) / 50.0;
        prev.first = t.first;
        prev.second = t.second;
    }   


    cout << fixed << setprecision(9);
    cout << tm * k << endl;
    return 0;
}
