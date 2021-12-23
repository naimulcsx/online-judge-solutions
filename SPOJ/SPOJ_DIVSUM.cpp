#include <bits/stdc++.h>
using namespace std;
int sum_divs(int n);

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << sum_divs( n ) << endl;
    }
    return 0;
}

int sum_divs(int n) {
    if (n < 2) return 0;
    int total = 1;
    for (int i = 2; i * i <= n; i++) {
        if (i * i == n)
            total += i;
        else if (n % i == 0)
            total += i + (n / i);
    }
    return total;
}
