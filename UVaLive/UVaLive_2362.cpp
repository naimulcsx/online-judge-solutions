#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 12; 
    double balance, total {0};

    while(n--) {
        cin >> balance;
        total += balance;
    }

    cout << "$" << static_cast<double>(total / 12) << endl;
    return 0;
}
