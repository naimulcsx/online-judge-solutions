#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int magnets[n];

    for (int i = 0; i < n; i++)
        cin >> magnets[i];
    
    int groups {1};

    for (int i = 0; i < n - 1; i++)
        if (magnets[i] != magnets[i + 1])
            groups++;

    cout << groups << endl;
}