#include <iostream>

using namespace std;

int sum_digits(unsigned long long num) {
    int sum = 0;
    while(num != 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main() {
    unsigned long long x;

    while(1) {
        cin >> x;
        if (x == 0) break;

        x = sum_digits(x);
        x = sum_digits(x);
        x = sum_digits(x);

        cout << x << endl;
    }
}