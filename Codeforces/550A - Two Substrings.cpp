#include <bits/stdc++.h>
using ll = long long;
using namespace std;

string str;
char s[100100];

bool func(char a, char b) {
    int len = str.size();

    for ( int i = 0; i < len - 1; ++i ) {
        if ( str[i] == a && str[i + 1] == b ) {
            for ( int j = len - 1; j >= 1; j-- ) {
                if ( j - 1 <= i + 1 ) return false;
                if ( str[j - 1] == b && str[j] == a ) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    scanf("%s", s);
    str.assign(s);

    if ( func('A', 'B') ) printf("YES");
    else if ( func('B', 'A') ) printf("YES");
    else printf("NO");

    return 0;
}
