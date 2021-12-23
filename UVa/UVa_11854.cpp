#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int ulli;

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
    while(1) {
        vector<ulli> side_lens;
        lib<ulli>::vec_in(side_lens, 3);
        sort(side_lens.begin(), side_lens.end());

        if (side_lens[0] == 0 && side_lens[1] == 0 && side_lens[2] == 0)
            break;

        if (side_lens[0] * side_lens[0] + side_lens[1] * side_lens[1] == side_lens[2] * side_lens[2])
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
 
    return 0; 
}
