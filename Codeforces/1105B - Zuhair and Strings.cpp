#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    int n, k;
    string s;
    cin >> n >> k >> s;

    int i = 0;
    map<char, vector<int>> data;
    while(i < n) {
        int l = i, m = i + 1;
        while(m < n && s[l] == s[m]) l++, m++;
        data[s[i]].push_back(m - i);
        i = m;
    }

    int mx = 0;
    for (auto it = data.begin(); it != data.end(); it++) {
        int count = 0;
        vector<int>temp = it->second;
        for (auto n: temp) 
            if (n >= k) count += n / k;
        mx = max(mx, count);
    }
    cout << mx << endl;
    return 0;
}
