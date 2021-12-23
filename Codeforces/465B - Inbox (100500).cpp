#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], last_pos = -1;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] == 1) last_pos = i;
    }

    if ( last_pos == -1 )
        cout << 0 << endl;

    else {
        int i = 0, count = 0;

        while( i < n ) {
            if ( i == last_pos ) {
                count++;
                break;
            }

            if ( i < n - 1 && i != last_pos && arr[i] == 1 && arr[i] == arr[i + 1] )
                count += 1;

            if ( i < n - 1 && arr[i] == 1 && arr[i + 1] == 0 )
                count += 2;            

            ++i;
        }   
        
        cout << count << endl;
    }
    return 0;
}
