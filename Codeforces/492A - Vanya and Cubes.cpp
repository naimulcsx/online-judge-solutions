#include <bits/stdc++.h>
using namespace std;

int sum_series(int);

int main(void) {
    int cubes;
    cin >> cubes;

    int n = 1;
    while( !(sum_series(n) <= cubes && sum_series(n + 1) > cubes) )
        n++;

    cout << n << endl;

    return 0;
}

int sum_series(int n) {
    return (((n * (n + 1)) / 2) * (n + 2)) / 3;
}
