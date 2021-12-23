#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a = n, count = 0, temp;
    while(a >= m) {
        temp = a % m;
        count += a / m;
        a /= m;
        a += temp; 
    }

    cout << n + count << endl;

    return 0;
}
