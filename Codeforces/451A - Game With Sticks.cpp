#include <iostream>
using namespace std;

int min(int x, int y) {
    return (x < y) ? x : y;
}

int main(void) {
    int n, m;
    cin >> n >> m;

    if (min(n, m) % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;

    return 0;
}