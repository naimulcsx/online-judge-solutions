#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int q;
    cin >> q;
    while(q--) {
        string str;
        cin >> str;

        int freq[26];
        memset(freq, 0, sizeof(freq));

        bool flag = true;
        for (int i = 0; i < str.size(); ++i) freq[ str[i] - 'a' ]++;
        for (int i = 0; i < 26; ++i) if (freq[i] > 1) { flag = false ; break; }

        if (!flag) {
            cout << "no" << endl;
            continue;
        }

        vector<int> pos;
        for (int i = 0; i < 26; ++i)
            if (freq[i]) pos.push_back(i);

        for (int i = 0; i < pos.size() - 1; ++i)
            if (pos[i + 1] - pos[i] != 1) {
                flag = false;
                break;
            }

        if (flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
