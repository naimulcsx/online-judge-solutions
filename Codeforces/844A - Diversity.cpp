#include <bits/stdc++.h>
using namespace std;

int marks[26];

int main() {
    ios::sync_with_stdio(false);

    int n;
    string str;
    cin >> str >> n; 

    int cnt = 0;
    for (auto el: str) marks[el - 'a'] = 1;
    for (auto el: marks) if (el) cnt++;

    if ( n > (int) str.size() ) cout << "impossible" << endl;
    else if ( cnt >= n ) cout << 0 << endl;
    else cout << n - cnt << endl;

    return 0;
}

