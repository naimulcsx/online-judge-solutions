#include <bits/stdc++.h>
using namespace std;
struct info {int val, pos;};

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;

    set<string> strs;
    int seg1 = 0, seg2 = s.length();
    for (int i = 0; i < s.length(); ++i) {
        string temp = "";
        temp += s.substr(i, seg2);
        temp += s.substr(0, seg1);
        strs.insert(temp);
        seg1++, seg2--;
    }

    cout << strs.size() << endl;
    return 0;
}
