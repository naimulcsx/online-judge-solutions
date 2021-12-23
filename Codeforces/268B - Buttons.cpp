#include <bits/stdc++.h>
using namespace std;
using ulli = unsigned long long int;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int sum = (n * (n + 1)) / 2;

    for (int i = n - 1; i >= 2; --i) {
        int wrong_press_count = i - 1;
        sum += (wrong_press_count * (n - i));
    }

    cout << sum << endl;
    return 0;
}
