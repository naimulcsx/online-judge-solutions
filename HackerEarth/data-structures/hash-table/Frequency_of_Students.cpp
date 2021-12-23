/*
Problem Link:
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/frequency-of-students/
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    map<string, int> freq;
    for (int i = 0; i < n; ++i) {
        string name; cin >> name;
        freq[name]++;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it)
        cout << it->first << " " << it->second << endl;
    return 0;
}
