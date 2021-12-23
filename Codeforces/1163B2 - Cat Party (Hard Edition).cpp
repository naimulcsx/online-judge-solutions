#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 500;

int freq[MAX], groups[MAX], mx_ocr;

int main() {
    int n, x;
    cin >> n;

    int res, flag;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        groups[ freq[x] ]--; // reset previous
        freq[x]++; // track the frequency
        groups[ freq[x] ]++; // update new

        // max occurance
        mx_ocr = max( mx_ocr, freq[x] );
        flag = 0;

        if ( groups[1] == i ) flag = 1;
        else if ( groups[i] == 1 ) flag = 1;
        else if ( groups[1] == 1 &&  groups[mx_ocr] * mx_ocr == i - 1) flag = 1;
        else if ( groups[mx_ocr] == 1 && groups[mx_ocr - 1] * (mx_ocr - 1) == i - mx_ocr ) flag = 1;

        if (flag) res = i;
    }

    cout << res << endl;
    return 0;
}
