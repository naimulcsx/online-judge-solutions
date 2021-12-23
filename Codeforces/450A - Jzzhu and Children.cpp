#include <bits/stdc++.h>
using namespace std;

struct info { int need, have, pos; };

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    int n, m;
    cin >> n >> m;

    deque<info> current(n);
    for (int i = 0; i < n; ++i) {
        cin >> current[i].need;
        current[i].pos = i + 1;
    }

    for (int i = 0; i < n; ++i) current[i].have = 0;

    int i = 0;
    while( current.size() > 1 ) {
        current[i].have += m;

        if ( current[i].have < current[i].need ) {
            info temp = current[i];
            current.pop_front();
            current.push_back(temp);
        } else current.pop_front();
    }

    cout << current[i].pos << endl;
    return 0;
}
