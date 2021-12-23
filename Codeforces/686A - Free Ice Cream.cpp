#include <iostream>

using namespace std;

int main() {
    long long queue_length, ice_creams;
    cin >> queue_length >> ice_creams;

    char operation;
    long long ammount, distressed_kids;

    while(queue_length--) {
        cin >> operation >> ammount;

        if (operation == '-') {
            if (ice_creams >= ammount)
                ice_creams -= ammount;
            else
                distressed_kids++;
        }
            
        if (operation == '+')
            ice_creams += ammount;
    }   

    cout << ice_creams << " " << distressed_kids << endl;
}