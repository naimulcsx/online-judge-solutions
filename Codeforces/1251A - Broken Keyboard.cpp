#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    while(q--) {
        string str;
        cin >> str;
        vector<bool> vec(26, 0);

        int sz = str.size();
        for (int i = 0; i < sz; ++i) {
            if (i == sz - 1) vec[str[i] - 'a'] = 1;
            else if (str[i] != str[i + 1]) vec[str[i] - 'a'] = 1;
            else if (str[i] == str[i + 1]) ++i;
        }

        string res = "";
        for (int i = 0; i < 26; ++i) if (vec[i]) res += (char) (i + 'a');
        sort(res.begin(), res.end());
        cout << res << endl;
    }
 
    return 0;
}
