#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int count = 0, i = 0;
    while( i < n - 2 ) {
        if ( arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1 )
            count++, i += 3;
        else
            i++;
    }

    cout << count << endl;
    return 0;
}
