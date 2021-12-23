#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif  

    int lines, size, c = 1;


    while(cin >> lines >> size) {
        if (lines == 0 && size == 0) break;
        if (c > 1) cout << endl;
        cout << "Field #" << c << ":" << endl;

        vector<string> data(lines);
        for (int i = 0; i < lines; ++i)
            cin >> data.at(i);


        for (int i = 0; i < lines; ++i) {
            for (int j = 0; j < size; ++j) {
                if (data[i][j] == '.') {
                    int count = 0;

                    // i -> j + 1, j - 1
                    if ( j - 1 >= 0 && data[i][j - 1] == '*') count++;
                    if ( j + 1 <= size - 1 && data[i][j + 1] == '*') count++;

                    // i - 1 -> j, j - 1, j + 1
                    if (i - 1 >= 0) {
                        if ( j - 1 >= 0 && data[i - 1][j - 1] == '*') count++;
                        if ( j >= 0 && data[i - 1][j] == '*') count++;
                        if ( j + 1 <= size - 1 && data[i - 1][j + 1] == '*') count++;
                    }

                    // i + 1 -> j, j - 1, j + 1
                    if (i + 1 <= lines - 1) {
                        if ( j - 1 >= 0 && data[i + 1][j - 1] == '*') count++;
                        if ( j >= 0 && data[i + 1][j] == '*') count++;
                        if ( j + 1 <= size - 1 && data[i + 1][j + 1] == '*') count++;
                    }

                    cout << count;
                } else cout << "*";
            }
            cout << endl;
        }
        c++;
    }

    return 0;
}
