#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    cin >> line;

    int data[ (int) line.length() ];
    data[0] = 0;
    for (int i = 1; i < (int) line.length(); ++i)
        data[i] = data[i - 1] + (line[i] == line[i - 1] ? 1 : 0);
    
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << data[r - 1] - data[l - 1] << endl;
    }
    
    return 0;
}
