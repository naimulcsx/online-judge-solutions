#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, lim;
string str;
int have[200];

int main() {
    cin >> n >> str;
    lim = str.size();

    int res = 0;

    for (int i = 0; i < lim; i += 2) {
        char door = tolower(str[i + 1]), key = str[i];
        have[key]++;
        if (have[door] > 0) have[door]--;
        else res++;
    }

    cout << res << endl;
    return 0;   
}
