#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    if (n < 25) cout << -1 << endl;
    else {
        int a = -1, b = -1;

        for (int i = 1; i * i <= n; ++i) {
            if (i * i == n) {
                if (i >= 5) a = i, b = i;
                break;
            } else if (n % i == 0) {
                if (i >= 5 && n / i >= 5) {
                    a = i;
                    b = n / i;
                }
            }
        }

        if (a + b == -2) cout << -1 << endl;
        else {
            string vowels = "aeiou";

            for (int j = 0; j < a; ++j) {
                int cols = b / 5, left = b % 5;
                for (int i = 0; i < cols; ++i) cout << vowels;
                cout << vowels.substr(0, left);
                rotate(begin(vowels), begin(vowels) + 1, end(vowels));
            }
        }
    }
    
    return 0;
}
