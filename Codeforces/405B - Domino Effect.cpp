#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> n >> str;

    for (int i = 0; i < n ; ++i) {
        if ( str[i] == 'L' ) {
            int j = i - 1, dis = 0;

            while( j >= 0 ) {
                if (str[j] == 'R') {
                    if (dis & 1) str[(j + i) / 2] = '.';
                    break;
                }
                str[j] = '_';
                --j;
                dis++;
            }

        } else if (str[i] == 'R') {
            int j = i + 1, dis = 0;

            while( j < n ) {
                if ( str[j] == 'L'  ) {
                    if (dis & 1) {
                        str[(j + i) / 2] = '.';
                    }
                    break;
                }
                str[j] = '_';
                dis++;
                j++;
            }
        }
    }


    cout << count_if(begin(str), end(str), [](char ch) {
        return ch == '.';
    }) << endl;
    return 0;
}
