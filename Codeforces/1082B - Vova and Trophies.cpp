#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    vector<int> data;

    int i = 0, j = 1;
    while( i < n ) {
        char ch = s[i];
        if ( ch == 'S' ) {
            data.push_back(0);
            i++, j++;
            continue;
        }
        while( s[j] == ch ) j++;
        data.push_back(j - i);
        i = j;
    }

    // count the number of G
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (s[i] == 'G')
            count++;

    // result
    int maxlen = 0;
    for (int i = 0; i < (int) data.size(); ++i) {
        if ( data[i] == 0 ) {
            int temp = 1;
            if (i > 0) temp += data.at(i - 1);
            if (i < data.size() - 1) temp += data.at(i + 1);
            maxlen = max(maxlen, temp);
        }
    }

    int res = min( count, maxlen );
    if (count == n) res = n;
    cout << res << endl;
    return 0;
}
