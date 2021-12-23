#include <bits/stdc++.h>

using namespace std;


int main(void) {
    int n;
    cin >> n;
    int arr[n];

    // take input to the array
    for (int i = 0;i < n; i++)
        cin >> arr[i];
    // sort the array
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) 
        if (i != n - 1)
            cout << arr[i] << " ";
        else
            cout << arr[i] << endl;

    return 0;
}