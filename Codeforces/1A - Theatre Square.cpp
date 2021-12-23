#include <iostream>
typedef unsigned long long int ulli;
using namespace std;

int main() {
    ulli n, m, a, count;
    cin >> n >> m >> a;

    count = (n / a) + ((n % a != 0) ? 1 : 0);
    count *= (m / a) + ((m % a != 0) ? 1 : 0);
    cout << count << endl;
    
    return 0;
}
