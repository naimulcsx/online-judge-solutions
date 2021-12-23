#include<bits/stdc++.h> 
using namespace std;

template <class T>
struct lib {
    static T sum_arr(T *arr, int len) {
        T total = 0;
        for (int i = 0; i < len; i++)
            total += arr[i];
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


int main () {
    int n;
    cin >> n;
    vector<int> data;
    lib<int>::vec_in(data, n);

    int min = 1000000000, max = 0;
    for (auto num: data) {
        if (num > max) max = num;
        if (num < min) min = num;
    }

    int count = 0;
    for (auto num: data) {
        if (num > min && num < max)
            count++;
    }
    cout << count << endl;
    return 0;
}
