#include <bits/stdc++.h>
using namespace std;

pair<int, int> new_pos(int x, int y, char dir) {
    if (dir == 'E') return {x + 1, y};
    else if (dir == 'S') return {x, y - 1};
    else if (dir == 'W') return {x - 1, y};
    return {x, y + 1};
}

int steps(int x1, int y1, int x2, int y2) {
    int x = abs(x1 - x2), y = abs(y1 - y2);
    return x + y;
}

int main() {
    int t, x1, y1, x2, y2;;
    cin >> t >> x1 >> y1 >> x2 >> y2;

    string dir;
    cin >> dir;

    int k = 0;
    for (int i = 0; i < t; ++i) {
        pair<int, int> npos = new_pos(x1, y1, dir[i]);
        int old_dis = steps(x1, y1, x2, y2), 
            new_dis = steps(npos.first, npos.second, x2, y2);
        
        k++;
        if (new_dis >= old_dis) continue;
        x1 = npos.first;
        y1 = npos.second;
        if (x1 == x2 && y1 == y2) {
            cout << k << endl;
            return 0;
        }
    }


    cout << -1 << endl;
    return 0;
}
