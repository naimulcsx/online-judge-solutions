#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m, input;
    cin >> n >> m;

    int arr[n][2 * m], c = 0;
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < 2 * m; ++j)
            cin >> arr[i][j];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < 2 * m; j += 2)
            if (arr[i][j] == 1 || arr[i][j + 1] == 1)
                c++;

    cout << c << endl;
    return 0;
}
