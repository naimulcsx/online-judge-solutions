#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main() {
    long double n;

    while( scanf("%Lf", &n) != EOF ) {
        ulli result = pow(n, 2) * pow(n + 1, 2) / 4;
        cout << result << endl;
    }

    return 0;
}
