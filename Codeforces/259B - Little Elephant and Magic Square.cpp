#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int mat[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> mat[i][j];

    int x_plus_z = mat[0][2] + mat[2][0];
    int x_minus_z = (mat[2][0] + mat[2][1]) - (mat[0][1] + mat[0][2]);
    int x = (x_plus_z + x_minus_z) / 2;
    int z = x_plus_z - x;
    int y = x + (mat[0][1] + mat[0][2]) - x - z;

    mat[0][0] = x;
    mat[1][1] = y;
    mat[2][2] = z;

    for ( int i = 0; i < 3; ++i ) {
        for (int j = 0; j < 3; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
