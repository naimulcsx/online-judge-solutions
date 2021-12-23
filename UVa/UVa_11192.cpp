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

    int n;
    while(cin >> n && n) {
        string s, result = "";
        cin >> s;

        int start = 0, divs = s.length() / n;
        string sub;

        for (int i = 0; i < n ; i++) {
            if (i == n - 1)
                sub = s.substr(start);   
            else
                sub = s.substr(start, divs);    

            reverse(sub.begin(), sub.end());
            start += divs;
            result += sub;
        }

        cout << result << endl;
    }

    return 0;
}
