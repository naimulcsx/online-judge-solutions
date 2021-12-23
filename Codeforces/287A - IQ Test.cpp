#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<string> arr(4);
    for (auto &el: arr) cin >> el;


    for (int i = 1; i <= 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            unordered_map<char, int> data;
        
            data[arr[i - 1][j]]++, data[arr[i - 1][j + 1]]++;
            data[arr[i][j]]++, data[arr[i][j + 1]]++;

            if (data['#'] >= 3 || data['.'] >= 3) {
                cout << "YES" << endl;
                return 0;
            }
        }

        for (int j = 0; j < 3; ++j) {
            unordered_map<char, int> data;
            data[arr[i + 1][j]]++, data[arr[i + 1][j + 1]]++;
            data[arr[i][j]]++, data[arr[i][j + 1]]++;

            if (data['#'] >= 3 || data['.'] >= 3) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
