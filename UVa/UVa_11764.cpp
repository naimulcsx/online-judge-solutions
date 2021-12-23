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
    int T, C = 1;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        vector<int> data;
        lib<int>::vec_in(data, N);

        int low_jumps = 0, high_jumps = 0;

        for (int i = 0; i < (int) data.size() - 1; i++) {
            if (data.at(i + 1) > data.at(i))
                high_jumps++;
            else if (data.at(i + 1) < data.at(i))
                low_jumps++;
        }

        cout << "Case " << C << ": ";
        cout << high_jumps << " " << low_jumps << endl;

        C++;
    }

    return 0;
}
