#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int t, v;

    while (scanf("%d %d", &t, &v) != EOF) {
        cout << 2 * t *v << endl;
    }
    
    return 0;
}