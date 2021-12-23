#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int l, r;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; ++i) {
        string str = to_string(i);
        int k = str.size();
        vector<int> cnt(10);

        for (int i = 0; i < k; ++i) {
            cnt[str[i] - '0']++;
        }

        bool flag = true;
        for (auto el: cnt) {
            if (el > 1) {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout << str << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
