#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n == 0 || n == 1) return false;
    else if (n == 2) return true;
    else if (n % 2 == 0) return false;

    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    int n, i, j;
    cin >> n;

    i = n / 2, j = n - i;
    while( is_prime(i) || is_prime(j) )
        i++, j--;
    
    cout << i << " " << j << endl;
    return 0;
}
