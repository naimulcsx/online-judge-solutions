#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);


    int n;
    cin >> n;
    string str;
    cin >> str;

    int cnt = 0;
    for (int i = 0; i < n; i += 2) {
        if (str[i] == str[i + 1]) {
            cnt++;
            if (str[i + 1] == 'a') str[i] = 'b';
            else str[i] = 'a';
        }
    }

    cout << cnt << endl;
    cout << str << endl;
    return 0;
}
