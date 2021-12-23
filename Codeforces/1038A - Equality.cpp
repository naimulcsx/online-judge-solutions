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
    string s; cin >> s;

    map<char, int> freq;
    for (int i = 0; i < k; ++i)
        freq['A' + i] = 0;

    for ( auto ch: s ) freq[ch]++;
    auto min = min_element(freq.begin(), freq.end(), [](auto a, auto b) {
        return a.second < b.second;
    });

    cout << min->second * k << endl;
    return 0;
}
