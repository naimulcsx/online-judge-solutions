#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    long long x, y;
    while (scanf("%lld %lld", &x, &y) != EOF) {
        cout << abs(x - y) << endl;
    }
    return 0;
}