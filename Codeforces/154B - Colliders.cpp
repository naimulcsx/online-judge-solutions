#include <bits/stdc++.h>
using namespace std;

vector<int> divs[100100];
void gen_divs(int n) {
    for (int i = 2; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            divs[j].push_back(i);
        }
    }
}

bool on[1001000];
int used[101000], ans[101000];

int chk(int n) {
    if (on[n] == 1) return -2;  // already on

    for (auto el: divs[n])
        if (used[el]) 
            return ans[el];

    for (auto el: divs[n]) used[el] = 1, ans[el] = n;
    on[n] = 1;
    return -1; // success
}

int rem(int n) {
    if (on[n] == 0) return -1; // already off
    for (auto el: divs[n]) used[el] = 0, ans[el] = n;
    on[n] = 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    gen_divs(1e5);

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; ++i) {
        char op; int x;
        cin >> op >> x;

        if (op == '+') {

            int flag = chk(x);
            if (flag == -2) cout << "Already on\n";
            else if (flag == -1) cout << "Success\n";
            else cout << "Conflict with " << flag << "\n";

        } else if (op == '-') {

            int flag = rem(x);
            if (flag == -1) cout << "Already off\n";
            else cout << "Success\n";

        }
    }

    return 0;
}
