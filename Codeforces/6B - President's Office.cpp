#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    char p_color;
    cin >> row >> col >> p_color;

    string line;
    char mat[row][col];
    vector<pair<int, int>> p_pos;

    for (int i = 0; i < row; ++i) {
        cin >> line;
        for (int j = 0; j < col; ++j) {
            mat[i][j] = line[j];
            if (mat[i][j] == p_color) p_pos.push_back( {i, j} );
        }
    }

    set<char> unq;
    unq.insert(p_color);

    for (auto el: p_pos) {
        int x = el.first, y = el.second;

        if ( x - 1 >= 0 && isalpha(mat[x - 1][y])  ) unq.insert( mat[x - 1][y] );  // upper row
        if ( x + 1 < row  && isalpha(mat[x + 1][y]) ) unq.insert( mat[x + 1][y] );  // row below
        if ( y - 1 >= 0 && isalpha(mat[x][y - 1]) ) unq.insert( mat[x][y - 1] );    // left
        if ( y + 1 < col && isalpha(mat[x][y + 1]) ) unq.insert( mat[x][y + 1] );   // right
    }

    cout << unq.size() - 1 << endl;
    return 0;
}
