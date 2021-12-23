#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    // input list
    int arr[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];


    int current = 0, needed = arr[0];
    // compare i'th, and (i + 1)'th element
    for (int i = 0; i < n - 1; ++i) {
        // when we need energy
        if ( arr[i] < arr[i + 1] ) {
            // when the ammount of energy we need is less that current energy
            if ( current >= arr[i + 1] - arr[i] ) 
                current -= arr[i + 1] - arr[i];
            else {
                needed += arr[i + 1] - arr[i] - current;
                current = 0;
            }
        }

        // when we gain energy
        else if ( arr[i] > arr[i + 1] )
            current += arr[i] - arr[i + 1];            
    }

    cout << needed << endl;
    return 0;
}
