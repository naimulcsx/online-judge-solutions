#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    #endif

    int a, b;
    cin >> a >> b;
    // the answer is factorial of min(a, b) 
    // since the minimum's factorial divides the maximum's factorial
    int res = 1;
    for (int i = 2; i <= min(a, b); ++i)
        res *= i;
        
    cout << res << endl;
    return 0;
}
