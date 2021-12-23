#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    string str;
    cin >> str;

    int i = 0, sz = str.size(), res = 0;
    while ( i < sz ) {
        int j = i + 1, cnt = 1;
        while( j < sz && cnt < 5 && str[j] == str[i] ) cnt++, j++, i++;
        res++;
        i = j;
    }
    
    cout << res << endl;
    return 0;   
}