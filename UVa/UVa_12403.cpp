#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, total = 0;
    cin >> t;
    
    while(t--) {
        string operation;
        cin >> operation;

        if (operation == "donate") {
            int ammount;
            cin >> ammount;
            total += ammount;
        }

        else if (operation == "report")
            cout << total << endl;
    }

    return 0;
}
