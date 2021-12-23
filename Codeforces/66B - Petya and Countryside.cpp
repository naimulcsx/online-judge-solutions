#include <iostream>
using namespace std;

int max_watered_sections(int *, int, int);

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int max = 0, max_sections;
    for (int i = 0; i < n; ++i) {
        max_sections = max_watered_sections(arr, i, n);
        if (max_sections > max)
            max = max_sections;
    }

    cout << max << endl;
    return 0;
}

int max_watered_sections(int *arr, int sec_index, int n) {
    int count = 1, i, j;
    i = sec_index - 1, j = sec_index;
    
    while( i >= 0 ) {
        if ( arr[i] <= arr[j] )
            count++;
        else break;
        i--, j--;
    }

    i = sec_index + 1, j = sec_index;
    while( i < n ) {
        if ( arr[i] <= arr[j] )
            count++;
        else break;
        i++, j++;
    }

    return count;
}
