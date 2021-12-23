#include <bits/stdc++.h>
using namespace std;

template <class T>
struct lib {
    static T sum_arr(T *arr, int len) {
        T total = 0;
        for (int i = 0; i < len; i++)
            total += arr[i];
        return total;
    }

    static T sum_vec(const vector<T> &v) {
        T total = 0;
        for (int i = 0; i < v.size(); i++)
            total += v[i];
        return total;
    }

    static void arr_in(T *arr, int len) {
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


int main(void) {
    int t;
    cin >> t;

    while(t--) {
        int n, max_weight;
        cin >> n >> max_weight;

        int arr[n];
        lib<int>::arr_in(arr, n);
        sort(arr, arr + n);

        int sum = 0, i = 0;
        while(i < n && sum <= max_weight) {
            sum += arr[i];
            i++;
        }

        sum = (sum > max_weight) ? i-- : i;
        cout << i << endl;
    }

    return 0;
}
