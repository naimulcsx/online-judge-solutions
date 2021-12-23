#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int a1, a2, a3, b1, b2, b3, a, b, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

    a = a1 + a2 + a3;
    b = b1 + b2 + b3;

    int need_for_a, need_for_b;
    need_for_a = a / 5;
    need_for_a += (a % 5 != 0) ? 1 : 0;

    need_for_b = b / 10;
    need_for_b += (b % 10 != 0) ? 1 : 0;


    if (need_for_a + need_for_b > n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;    
    
    return 0;
}
