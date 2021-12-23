#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2, p, q, r, s;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    r = (c1 - r1 + d2) / 2;
    q = d2 - r;
    s = c2 - q;
    p = c1 - r;

    bool is_right = true;
    set<int> answer {r, q, s, p};

    is_right = (answer.size() < 4) ? false: true;
    for (auto a: answer)
        if ( a > 9 || a < 1 || p + q != r1 || r + s != r2 || p + r != c1 || q + s != c2 || p + s != d1 || r + q != d2 )
            is_right = false;
    
    if (is_right)
        cout << p << " " << q << endl << r << " " << s << endl;
    else
        cout << -1 << endl;

    return 0;
}
