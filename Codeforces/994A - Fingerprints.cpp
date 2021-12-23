#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int arr[n], marks[10];
    memset(marks, 0, sizeof marks);

    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    for (int i = 0; i < m; ++i) {
        int input;
        cin >> input;
        marks[input] = 1;
    }

    for (int i = 0; i < n; ++i) {
        if (marks[arr[i]])
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
