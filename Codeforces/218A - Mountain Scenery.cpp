#include <iostream>
using namespace std;

int main() {
    int n, k, len;
    cin >> n >> k;
    len = 2 * n  + 1;

    int arr[len];
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    
    int i = 0, temp;
    while( k != 0 && i < len ) {        
        if ( (i + 1) % 2 == 0 ) {
            temp = arr[i] - 1;
            if (temp > arr[i - 1] && temp > arr[i + 1]) {
                arr[i]--;
                k--;
            }
        }
        i++;
    }

    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
