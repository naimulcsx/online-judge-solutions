#include <bits/stdc++.h>
using namespace std;

template <typename T> 
ostream& operator << (ostream &os, vector<T> &arr) {
    for (auto el: arr) os << el << ' ';
    return os;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);


    for (int i = 0; i < n; i += 2) {
        if (k > 0) {
            arr[i] = 1;
            k--;
        }
    }

    if (k > 0) {
        for (int i = 1; i < n; ++i) {
            if (k > 0 && arr[i] == 0) {
                arr[i] = 1;
                k--;
            }
        }
    }

    int res = 0, i = 0;
    while(i < n) {
        int j = i;
        bool flag = false;
        while(j < n && arr[j] == 0) j++, flag = true;
        if (flag) res++;
        if (j == i) ++i;
        else i = j;
    }
    
    cout << res << endl;
    return 0;
}
