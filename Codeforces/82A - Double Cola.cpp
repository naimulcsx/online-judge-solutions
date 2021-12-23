#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    while( n > 5 )
        n = (n / 2) - 2;

    cout << names[n - 1] << endl;
    return 0;
}
