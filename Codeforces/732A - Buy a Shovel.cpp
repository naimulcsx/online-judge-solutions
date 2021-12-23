#include <iostream>

using namespace std;

bool can_pay_without_change(int cost, int r) {
    int tens_paid = 0, total = cost;
    // cout << total << " ";

    while(cost != cost % 10) {
        tens_paid++;
        cost -= 10;
    }

    if (cost == 0)
        return true;

    // cout << tens_paid * 10 << " " << endl;

    if ((tens_paid * 10) + r == total)
        return true;
    else
        return false;

    
}

int main() {
    int shovel_price, r;
    cin >> shovel_price >> r;

    int total_paid = 0, i = 1;
    
    while(1) {
        if(can_pay_without_change(i * shovel_price, r)) {
            cout << i << endl;
            break;
        }

        i++;
    }

    return 0;
}