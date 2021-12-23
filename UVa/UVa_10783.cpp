#include <iostream>

using namespace std;

int calculate_odd_sum(int lower, int higher) {
    int sum = 0;
    for (int i = lower; i <= higher; i++) {
        if (i % 2 == 1)
            sum += i;
    }
    return sum;
}

int main() {
    int n, _case = 1;
    cin >> n;

    while(n--) {
        int lower, higher, sum = 0;
        cin >> lower >> higher;
        sum = calculate_odd_sum(lower, higher);

        cout << "Case " << _case <<": " << sum << endl;
        _case++;
    }

    return 0;
}