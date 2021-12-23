#include <bits/stdc++.h>
using namespace std;

bool marks[210][210];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (auto &el: arr) cin >> el.first >> el.second;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        bool m[4];
        m[0] = m[1] = m[2] = m[3] = false;
        int x1 = arr[i].first, y1 = arr[i].second;
        vector<int> taken;

        for (int j = 0; j < n; ++j) {
            if (m[0] && m[1] && m[2] && m[3]) break;
            if (i != j && marks[i][j] == 0 && marks[j][i] == 0) {
                int x2 = arr[j].first, y2 = arr[j].second;    

                if ( !m[0] && x1 == x2 && y1 < y2 ) m[0] = true, taken.push_back(j);
                else if (!m[1] && x1 == x2 && y1 > y2) m[1] = true, taken.push_back(j);
                else if (!m[2] && y1 == y2 && x1 < x2) m[2] = true, taken.push_back(j);
                else if (!m[3] && y1 == y2 && x1 > x2) m[3] = true, taken.push_back(j);
            }       
        }

        if ( m[0] && m[1] && m[2] && m[3] ) {
            for (auto el: taken) marks[el][i] = marks[i][el] = 1;
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;   
}
