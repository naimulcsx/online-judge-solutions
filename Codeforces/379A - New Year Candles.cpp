#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = a, count = 0, temp;
    while(c >= b) {
        temp = c;
        count += (c / b);
        c /= b;
        c += (temp % b);
    }

    cout << count + a << endl;
    return 0;
}
