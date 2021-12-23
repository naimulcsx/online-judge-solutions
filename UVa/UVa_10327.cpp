#include <bits/stdc++.h>
using namespace std;

int min_swaps(int *, int);

int main() {
    int n;
    while(cin >> n) {
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Minimum exchange operations : " << min_swaps(arr, n) << endl;
    }
    return 0;
}

int min_swaps(int *arr, int len) {
    int count = 0;

    for (int i = 0; i < len; i++) {
        bool no_swap = true;

        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
                no_swap = false;
            }
        }

        if (no_swap)
            break;
    }

    return count;
}
