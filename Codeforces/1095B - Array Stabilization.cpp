#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
      
    sort( arr, arr + n );

    int current = n - 1, max_pos, min_pos = 0;
    int min = 100000000;
    while( current != 1 ) {
        if ( current == n - 1 ) 
            max_pos = n - 2;
        else
            max_pos = n - 1;

        
        if (arr[max_pos] - arr[min_pos] < min)
            min = arr[max_pos] - arr[min_pos];

        current--;
    }

    if (arr[n-1] - arr[1] < min)
        min = arr[n-1] - arr[1];

    cout << min << endl;
    return 0;
}
