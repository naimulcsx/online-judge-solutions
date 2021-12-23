#include <iostream>
#include <cstdio>

using namespace std;

int calculate_max_cycle(int n);
int max(int x, int y);
int min(int x, int y);

int main() {
    int i, j;

    while(scanf("%d %d", &i, &j) != EOF) {
        int max_cycle = 0;

        for (int x = min(i, j); x <= max(i, j); x++) {
            if (max_cycle < calculate_max_cycle(x))
                max_cycle = calculate_max_cycle(x);
        }

        cout << i << " " << j << " " << max_cycle << endl;
    }

    return 0;
}

int calculate_max_cycle(int n) {
    int cycle = 1;

    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        cycle++;
    }

    return cycle;
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

int min(int x, int y) {
    return (x < y) ? x : y;
}