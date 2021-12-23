#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int best[110];
string arr[110];
bool marks[110];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> arr[i];


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int mrks = arr[j][i] - '0';
            best[i] = max(best[i], mrks);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int mrks = arr[i][j] - '0';
            if (mrks == best[j]) {
                marks[i] = true;
                break;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) if (marks[i]) cnt++ ;
    cout << cnt << endl;
    return 0;
}
