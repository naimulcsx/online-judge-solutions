#include <bits/stdc++.h>
#define min(a,b) ( (a) < (b) ? (a) : (b) ) 

using namespace std;

int main() {
    int n, zero_count {0}, one_count {0};
    string s;
    cin >> n >> s;

    for (auto ch: s)
        if (ch == '0') zero_count++;
        else one_count++;

    cout << n - 2 * min(zero_count, one_count) << endl;
    return 0;
}
