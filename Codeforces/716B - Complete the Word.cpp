#include <bits/stdc++.h>
using namespace std;

string str;
int n, freq[300];


int main() {    
    cin >> str;
    n = str.size();
    if ( n < 26 ) { cout << -1 << endl; return 0; }


    bool flag = false;
    int i = 0, j = 25;
    for (int i = 0; i <= j; ++i) freq[str[i]]++;

    while( j < n ) {

        vector<char> unused;
        bool duplicates = false;
        int unknowns = freq['?'];

        for (int i = 'A'; i <= 'Z'; ++i) {
            if ( freq[i] == 0 ) {
                unused.push_back(i);
            } else if (freq[i] > 1) {
                duplicates = true;
                break;
            }
        }

        if ( !duplicates && unknowns == (int) unused.size() ) {    
            for (int k = i; k <= j; ++k) {
                if ( str[k] == '?' ) {
                    str[k] = unused.back();
                    unused.pop_back();
                }
            }
            flag = true;
            break;
        }
        
        ++j;
        if (i < n) freq[str[i]]--;
        if (j < n) freq[str[j]]++;
        ++i;
    }
    
    for (int i = 0; i < n; ++i) if (str[i] == '?') str[i] = 'A';
    if ( flag ) cout << str << endl;
    else cout << -1 << endl;

    return 0;
}

