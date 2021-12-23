#include <iostream>

using namespace std;

int main(void) {
    int n;
    
    while(1) {
        cin >> n;
        if (n == 42) break;
        cout << n << endl;
    }

    return 0;
}