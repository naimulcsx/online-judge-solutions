#include <bits/stdc++.h>
using namespace std;

int swap_count(int *, int);

int main() {
    int n, l;
    cin >> n;
    while(n--) {
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++) 
            cin >> arr[i];

        cout << "Optimal train swapping takes "<< swap_count(arr, l) << " swaps." << endl;
    }

    return 0;
}


int swap_count(int *arr, int l) {
    int count {0};

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }

    return count;
}
