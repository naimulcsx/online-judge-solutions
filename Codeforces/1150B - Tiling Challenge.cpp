#include <bits/stdc++.h>
using namespace std;

bool marks[55][55];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> arr(n);
    for (auto &el: arr) cin >> el;

    int cnt = 0;
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            unordered_map<char, int> mp;
            vector<pair<int, int>> coords
                {
                    {i, j},
                    {i, j - 1},
                    {i, j + 1},
                    {i - 1, j},
                    {i + 1, j}
                };
            
            for (auto el: coords) mp[arr[el.first][el.second]]++;
            if ( mp['.'] == 5 ) {
                bool taken = false;

                // check if already taken
                for (auto el: coords)
                    if ( marks[el.first][el.second] ) {
                        taken = true;
                        break;
                    }

                if ( !taken ) {
                    cnt++;
                    for (auto el: coords) {
                        marks[el.first][el.second] = true;
                        arr[el.first][el.second] = 'F';
                    }
                }
            }
        }
    }

    bool flag = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ( arr[i][j] == '.' ) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
