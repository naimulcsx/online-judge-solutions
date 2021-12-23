#include <bits/stdc++.h>
using namespace std;

int main() {
    string first, last;
    cin >> first >> last;
    int k = 1;
    string res = "";
    while( k < (int) first.size() && first[k] < last[0] ) res += first[k], k++;
    cout << first[0] << res << last[0] << endl;
    return 0;
}
