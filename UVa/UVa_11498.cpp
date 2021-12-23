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

struct coordinate {int x, y;};


int main() {

    int k;

    while(cin >> k && k) {
        int n, m;
        cin >> n >> m;
        coordinate data[k];

        for (int i = 0; i < k; i++)
            cin >> data[i].x >> data[i].y;

        for (int i = 0; i < k; i++) {
            int real_x, real_y;
            real_x = data[i].x - n;
            real_y = data[i].y - m;

            if (real_x == 0 || real_y == 0)
                cout << "divisa" << endl;
            else if (real_x > 0 && real_y > 0)
                cout << "NE" << endl;
            else if (real_x < 0 && real_y > 0)
                cout << "NO" << endl;
            else if (real_x < 0 && real_y < 0)
                cout << "SO" << endl;
            else if (real_x > 0 && real_y < 0)
                cout << "SE" << endl;
            
        }
    }

    return 0;
}
