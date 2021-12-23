#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int row, col;
    cin >> row >> col;

    bool mat[row][col], marks[row][col];
    for (int i = 0; i < row; ++i) {
        string line;
        cin >> line;

        for (int j = 0; j < line.length(); ++j) {
            if (line[j] == 'S') mat[i][j] = true;
            else mat[i][j] = false;
            // initialize marks
            marks[i][j] = true;
        }
    }


    int count = 0;

    // count the clean rows
    for (int i = 0; i < row; ++i) {
        bool is_clean = true;
        for (int j = 0; j < col; ++j) {
            if (mat[i][j] == true)  {
                is_clean = false;
                break;
            }
        }

        if (is_clean) {
            count += col;
            // mark those positions as counted
            for (int j = 0; j < col; ++j) marks[i][j] = false;
        }
    }


    // count the clean columns
    for (int i = 0; i < col; ++i) {
        bool is_clean = true;
        for (int j = 0; j < row; ++j) {
            if (mat[j][i] == true) {
                is_clean = false;
                break;
            }
        }

        if (is_clean) {
            for (int j = 0; j < row; ++j)
                if (marks[j][i] == true) count++;
        }
    }

    cout << count << endl;
    return 0;
}
