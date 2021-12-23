#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n <= 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    // generate fibs upto 1000 
    vector<int> fibs;
    for (int i = 1; i <= 16; ++i)
        fibs.push_back( fib(i) );

    string name = "";
    for (int i = 1; i <= n; ++i) {
        bool is_fib = binary_search(fibs.begin(), fibs.end(), i);
        if (is_fib) name += "O";
        else name += "o";
    }

    cout << name << endl;
    return 0;
}
