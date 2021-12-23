#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int sum(int k) {
    int s = 0;
    while(k > 0) {
        s += k % 10;
        k /= 10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    int k = n;
    bool flag = false;
    while( !flag ) {
        if (sum(k) % 4 == 0) {
            cout << k << endl;
            break;
        }
        k++;
    }
    return 0;
}
