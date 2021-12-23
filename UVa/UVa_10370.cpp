#include <bits/stdc++.h>
using namespace std;

template <class T>
struct lib {
    static T sum_arr(T *arr, T len) {
        T total = 0;
        for (int i = 0; i < len; i++)
            total += arr[i];
        return total;
    }

    static void arr_in(T *arr, T len) {
        for (int i = 0; i < len; i++)
            cin >> arr[i];
    }
};


int main() {
    int c;
    cin >> c;

    while(c--) {
        int n;
        cin >> n;
        int arr[n];
        lib<int>::arr_in(arr, n);

        int total, count = 0;
        double avg, per;
        total = lib<int>::sum_arr(arr, n);
        avg = (double) total / n;

        for_each(arr, arr + n, [&](int val) {
            if (val > avg)
                count++;
        });
        
        per = ((double) count / n) * 100;
        printf("%0.3lf%%\n", per);
    }

    return 0;
}
