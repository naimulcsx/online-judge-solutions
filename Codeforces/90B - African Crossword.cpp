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

    char mat[row][col];
    bool marks[row][col];

    string line;
    for (int i = 0; i < row; ++i) {
        cin >> line;
        for (int j = 0; j < (int) line.length(); ++j) {
            mat[i][j] = line[j]; 
            marks[i][j] = true;
        }
    }
    
    // check duplicates in the rows
    for (int i = 0; i < row; ++i) {
        unordered_map<char, int> freq;
        for (int j = 0; j < col; ++j)
            freq[mat[i][j]]++;

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second > 1) {
                for (int j = 0; j < col; ++j)
                    if (mat[i][j] == it->first) marks[i][j] = false;
            }
        }
    }
    
    // check duplicates in the cols
    for (int i = 0; i < col; ++i) {
        unordered_map<char, int> freq;
        for (int j = 0; j < row; ++j)
            freq[mat[j][i]]++;

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second > 1) {
                for (int j = 0; j < row; ++j)
                    if (it->first == mat[j][i]) marks[j][i] = false;
            }
        }
    }
    

    for ( int i = 0; i < row; ++i ) {
        for ( int j = 0; j < col; ++j ) {
            if  (marks[i][j] ) cout << mat[i][j];
        }
    }
    cout << endl;
    return 0;
}
