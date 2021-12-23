#include <bits/stdc++.h>
using namespace std;

bool is_colored(char *, int);

int main() {
    int row, col;
    cin >> row >> col;

    char arr[row][col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    for (int i = 0; i < row; i++)
        if ( is_colored(arr[i], col) ) {
            cout << "#Color" << endl;
            return 0;
        }

    cout << "#Black&White" << endl;
    return 0;
}

bool is_colored(char *arr, int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] != 'B' && arr[i] != 'W' && arr[i] != 'G')
            return true;
    }
    return false;
}
