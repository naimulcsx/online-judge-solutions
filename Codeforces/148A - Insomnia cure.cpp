#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int k, l, m, n, d ;
    cin >> k >> l >> m >> n >> d;

    bool marks[d + 1] {false};
    for (int i = 1; i <= d; i++)
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            marks[i] = true;
    

    int damage_count = 0;
    for (int i = 1; i <= d; i++)
        if (marks[i])
            damage_count++;

    cout << damage_count << endl;
    return 0;
}
