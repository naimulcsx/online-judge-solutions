#include <iostream>
#include <vector>
using namespace std;

int count_bill(int &, int);

int main() {
    int n, count = 0;
    cin >> n;

    vector<int> bills {100, 20, 10, 5, 1};
    for (auto bill: bills)
        count += count_bill(n, bill);

    cout << count << endl;
    return 0;
}

int count_bill(int &n, int bill) {
    int count = 0;
    if (n >= bill) {
        count += (n / bill);
        n -= bill * (n / bill);
    }
    return count;
}
