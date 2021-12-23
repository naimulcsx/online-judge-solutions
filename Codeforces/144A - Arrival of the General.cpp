#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    // get the positions of max and min element
    int arr[n], min = 1000, max = 0, max_pos, min_pos;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if ( arr[i] > max )
            max = arr[i],
            max_pos = i;

        if ( arr[i] <= min )
            min = arr[i],
            min_pos = i;
    }
    
    // calculation when min is on the right side and max is on the left side
    int result =  n - 1 - min_pos  + max_pos;

    // if min is one the left side and max is on the right side, we need one less move because the max will swap it one time
    if ( min_pos < max_pos )
        result--;
    
    // print result
    cout << result << endl;
    return 0;
}
