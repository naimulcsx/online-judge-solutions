#include <bits/stdc++.h>
using namespace std;

int n;
string str;

int main() {    
    cin >> str;
    n = str.size();
    str += '.';


    char prev = str[0];
    int i = 1, cnt = 1, prev_cnt = -1;

    string res = "";
    while( i <= n ) {
        
        if ( str[i] == prev ) {
            cnt++;
        } else {

            if ( cnt >= 2 && prev_cnt == 2 ) {
                res += prev;
                prev_cnt = 1;
            } else if ( cnt >= 2 ) {
                res += prev, res += prev;
                prev_cnt = 2;
            } else {
                res += prev;
                prev_cnt = 1;
            }

            cnt = 1;
            prev = str[i];
        }
        ++i;
    }    

    cout << res << endl;
   

    return 0;
}
