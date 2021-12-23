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

    static void vec_in(vector<T> &v, int len) {
        T input;
        while(len--) {
            cin >> input;
            v.push_back(input);
        }
    }

    static void vec_out(vector<T> &v) {
        for (int i = 0; i < (int) v.size() ; i++)
            if (i != (int) v.size() - 1)
                cout << v[i] << " ";
            else
                cout << v[i] << endl;
    }
};


int main() {
    int n;

    while(cin >> n && n) {
        int arr[n];
        lib<int>::arr_in(arr, n);
        vector<int> result;

        bool all_zero = true;
        for (int i = 0; i < n - 1; i++) 
            if (arr[i] > 0) {
                result.push_back(arr[i]);
                all_zero = false;
            }
        
        all_zero = (arr[n-1] == 0 && all_zero) ? true: false;

        if (all_zero)
            result.push_back(0);

        if (arr[n-1] != 0)
            result.push_back(arr[n-1]);
        
        lib<int>::vec_out(result);
    }

    return 0;
}
