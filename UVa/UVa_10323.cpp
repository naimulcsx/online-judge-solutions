#include <iostream>
using namespace std;
using ulli = unsigned long long int;

ulli factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    while(cin >> n) {

        if (n < 0 && n % 2 == -1)
            cout << "Overflow!" << endl;

        else if (n < 0 && n % 2 == 0)
            cout << "Underflow!" << endl;
        
        else if (n >= 8 && n <= 13)
            cout << factorial(n) << endl;

        else if (n < 8)
            cout << "Underflow!" << endl;

        else 
            cout << "Overflow!" << endl;
    }
    
    return 0;
}
