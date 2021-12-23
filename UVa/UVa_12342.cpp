#include <bits/stdc++.h>
using namespace std;

int calculate_tax(int);
void add_tax_for_next(int, double, int &, double &);

int main() {
    int t, c = 1;
    cin >> t;

    while(t--) {
        int ammount;
        cin >> ammount;
        cout << "Case " << c << ": ";
        cout << calculate_tax(ammount) << endl;
        c++;
    }

    return 0;
}

void add_tax_for_next(int range, double rate, int &ammount, double &tax) {
    if (ammount <= range) {
        tax += ammount * rate;
        ammount = 0;
        return;
    } 
    
    tax += range * rate;
    ammount -= range;
}

int calculate_tax(int ammount) {
    double tax = 0;

    if (ammount > 180000) {
        ammount -= 180000;

        add_tax_for_next(300000, 0.10, ammount, tax);
        add_tax_for_next(400000, 0.15, ammount, tax);
        add_tax_for_next(300000, 0.20, ammount, tax);
        add_tax_for_next(numeric_limits<int>::max(), 0.25, ammount, tax);

        if (tax < 2000) tax = 2000;
    }

    return ceil(tax);
}
