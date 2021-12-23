#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;
    
    set<int> team;
    vector<int> pos;
    int inserted = 0, index = 1;
    
    while(n--) {
        int a;
        cin >> a;
        if (inserted == k) break;
        auto temp = team.insert(a);
        if (temp.second) 
            inserted++,
            pos.push_back(index);
        index++;
    }

    if (inserted != k) cout << "NO" << endl;

    else {
        cout << "YES" << endl;
        for(int i = 0; i < pos.size(); ++i)
            cout << pos.at(i) << " " ;
        cout << endl;
    }

    return 0;
}
