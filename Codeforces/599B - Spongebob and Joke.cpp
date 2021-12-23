#include <bits/stdc++.h>
using namespace std;

vector<int> pos[100100];

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        int k;
        cin >> k;
        pos[k].push_back(i);
    }

    stringstream ss;
    bool amb = false, imp = false;
    for (int i = 1; i <= m; ++i) {
        int b;
        cin >> b;
        if (pos[b].size() == 0) imp = true;
        else if ( pos[b].size() > 1 ) amb = true;
        else ss << pos[b][0] << ' ';
    }
    
    if (imp) cout << "Impossible" << endl;
    else if (amb) cout << "Ambiguity" << endl;
    else cout << "Possible" << endl << ss.str() << endl;
    return 0;
}
