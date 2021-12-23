#include <bits/stdc++.h>
using namespace std;
struct info { int speed, ram, hdd, cost; };  

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<info> arr(n);
    vector<bool> marks(n, false);
    for (auto &el: arr) cin >> el.speed >> el.ram >> el.hdd >> el.cost;


    for (int i = 0; i < n; ++i) {
        info &fir = arr[i];
        for (int j = i + 1; j < n; ++j) {
            info &sec = arr[j];
            
            if (fir.speed < sec.speed && fir.hdd < sec.hdd && fir.ram < sec.ram)
                marks[i] = true;
            else if (sec.speed < fir.speed && sec.hdd < fir.hdd && sec.ram < fir.ram)
                marks[j] = true;
        }
    }


    int mn = numeric_limits<int>::max(), res ;
    for (int i = 0; i < n; ++i) {
        if (!marks[i]) {
            if (arr[i].cost < mn) {
                res = i + 1;
                mn = arr[i].cost;
            }
        }
    }

    cout << res << endl;
    return 0;
}
