#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int star_count, d_count, i = 0;
    star_count = n - 1, d_count = 1;

    vector<string> data;
    while(star_count >= 0) {
        // build the rows first n/2 + 1 rows
        string row = "";
        for (int i = 0; i < star_count / 2; ++i)   row += "*";
        for (int i = 0; i < d_count; ++i)          row += "D";
        for (int i = 0; i < star_count / 2; ++i)   row += "*";
        data.push_back(row);

        star_count -= 2;
        d_count += 2;
        ++i;
    }

    for (int i = 0; i < data.size(); ++i)
        cout << data[i] << endl;

    for (int i = data.size() - 2; i >= 0; --i)
        cout << data[i] << endl;
        
    return 0;
}
