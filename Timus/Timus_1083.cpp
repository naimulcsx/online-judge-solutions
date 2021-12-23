#include <iostream>

using namespace std;
int main(void) {
    int n, k, result;
    string input;
    cin >> n >> input;
    k = input.length(), result = 1;
    
    for (int i = n; i > 0; i -= k)
        result *= i;

    cout << result << endl;

    return 0;
}