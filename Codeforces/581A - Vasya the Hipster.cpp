#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b) {
    return (a <= b) ? a : b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << abs(a - b) / 2 << endl;
    return 0;
}
