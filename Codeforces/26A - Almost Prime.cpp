#include <bits/stdc++.h>
using namespace std;

int divs[3030];
bitset<3030> marks;
void sol(int n) {
    for (int i = 2; i <= n; ++i ) {
        if ( !marks[i] ) { 
            for ( int j = i + i; j <= n; j += i ) {
                marks[j] = 1;
                divs[j]++;
            }
            divs[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    sol(3000);
    int n;
    cin >> n;
    cout << count_if(divs + 1, divs + n + 1, [](int n) { return n == 2; }) << endl;
    return 0;
}
