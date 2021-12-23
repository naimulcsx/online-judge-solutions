#include <iostream>
#include <string>

using namespace std;
bool is_almost_lucky(int);


int main() {
    int input;
    cin >> input;

    if (is_almost_lucky(input)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


bool is_almost_lucky(int num) {
    bool flag = false;

    if (num % 4 == 0 || num % 7 == 0|| num % 47 == 0 || num % 74 == 0 || num % 444 == 0 || num % 447 == 0 || num % 477 == 0 || num % 474 == 0 || num % 777 == 0 || num % 744 == 0 || num % 774 == 0 || num % 747 == 0) {
        flag = true;
    }

    return flag;
}
