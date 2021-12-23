#include <bits/stdc++.h>
using namespace std;

void fill(vector<pair<char, int>> &data, string &s) {
    char prev = '-';
    int cnt = 0, len = s.size();
    
    int i = 0;
    while(i < len) {
        int j = i + 1, cnt = 1;
        while (j < len && s[i] == s[j]) cnt++, i++, j++;
        data.push_back({s[i], cnt});
        i = j;
    }
}

int main() {
    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    while(q--) {
        string a, b;
        cin >> a >> b;

        vector<pair<char, int>> t1, t2;
        fill(t1, a), fill(t2, b);
        
        bool flag = true;

        if (t1.size() != t2.size()) flag = false;
        else {
            int len = t1.size();
            for (int i = 0; i < len; ++i) {
                if (t1[i].first != t2[i].first || t1[i].second > t2[i].second) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;   
}
