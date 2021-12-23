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


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, sum_of_divisors;
        cin >> n;
        vector<int> divisors;

        for (int i = 1; i < n; i++)
            if (n % i == 0)
                divisors.push_back(i);

        sum_of_divisors = lib<int>::sum_vec(divisors);

        if (sum_of_divisors == n)
            cout << "perfect" << endl;
        else if (sum_of_divisors < n)
            cout << "deficient" << endl;
        else 
            cout << "abundant" << endl;
    }

    return 0;
}
