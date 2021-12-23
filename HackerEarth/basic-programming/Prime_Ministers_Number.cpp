#include <iostream>
#include <cstring>
using namespace std;

int sum_digits(int n) {
    if (n < 10) return n;
    return (n % 10) + sum_digits(n / 10);
}

void sol( int n, int l ) {
    bool marks[n + 1];
    memset(marks, true, n + 1);

    for (int i = 2; i * i <= n; ++i)
        if (marks[i])
            for (int j = i * i; j <= n; j += i)
                marks[j] = false;

    for(int i = l; i <= n; ++i)
        if ( marks[i] && marks[ sum_digits(i) ] )
            cout << i << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int l, r;
    cin >> l >> r;
    sol(r, l);
    return 0;
}
