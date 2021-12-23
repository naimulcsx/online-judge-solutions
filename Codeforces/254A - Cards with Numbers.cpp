#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    
    unordered_map<int, int> freq;
    unordered_map<int, vector<int>> pos;
    stringstream ss;

    for (int i = 0; i < 2 * n; ++i) {
        int k; 
        cin >> k;
        freq[k]++;
        pos[k].push_back(i + 1);
    }

    vector<pair<int, int>> res;
    for (auto el: freq) {
        if ( el.second & 1 ) {
            cout << -1 << endl;
            return 0;
        }
        
        vector<int> &pos_vec = pos[el.first];
        int sz = pos_vec.size();
        for (int i = 0; i < sz; i += 2)
            ss << pos_vec[i] << ' ' << pos_vec[i + 1] << endl;
    }

    cout << ss.str();
    return 0;
}
