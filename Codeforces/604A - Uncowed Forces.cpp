#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    vector<int> points {500, 1000, 1500, 2000, 2500};
    vector<int> time(5), wa(5);
    for (auto &el: time) cin >> el;
    for (auto &el: wa) cin >> el;

    double score = 0, k, w;
    cin >> k >> w;
    score += 100 * k;
    score -= 50 * w;


    for (int i = 0; i < 5; ++i) {
        score += max(
            0.3 * points[i], 
            (1 - time[i] / 250.0) * points[i] - 50 * wa[i]
        );
    }

    cout << score << endl;
    return 0;
}
