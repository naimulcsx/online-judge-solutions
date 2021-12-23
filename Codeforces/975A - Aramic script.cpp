#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    while(n--) {
        string s, res = "";
        cin >> s;
        vector<bool> marks(30, false);

        for (auto el: s) {
            if ( !marks[el - 'a'] ) {
                marks[el - 'a'] = true;
                res += el;
            }
        }

        sort(res.begin(), res.end());
        st.insert(res);
    }

    cout << st.size() << endl;
    return 0;
}
