#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    int k = 0;
    for (int i = 0; i < n; ++i) {
        int in; cin >> in;
        freq[in]++;
        k = max(k, freq[in]);
    }
    cout << n - k << endl;
    return 0;
}
