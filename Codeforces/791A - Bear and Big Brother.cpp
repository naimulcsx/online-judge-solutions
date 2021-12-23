#include <iostream>

using namespace std;

int main(void) {
    int limak_weight, bob_weight;
    cin >> limak_weight >> bob_weight;

    int year {0};
    
    while(limak_weight <= bob_weight) {
        limak_weight *= 3;
        bob_weight *= 2;
        year++;
    }

    cout << year << endl;
    return 0;
}
