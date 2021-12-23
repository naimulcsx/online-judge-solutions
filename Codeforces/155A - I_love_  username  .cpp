#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int min = arr[0], max = arr[0], count = 0;
    for (int i = 1; i < n; ++i) {
        if ( arr[i] > max )
            max = arr[i],
            count++;
    
        else if ( arr[i] < min )
            min = arr[i],
            count++;
    
    }

    cout << count << endl;
    return 0;
}
