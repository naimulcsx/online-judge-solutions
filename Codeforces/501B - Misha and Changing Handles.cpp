#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    map<string, string> data;

    while(n--) {
        string old, nw;
        cin >> old >> nw;
        if ( !data.count(old) ) 
            data.insert({nw, old});
        else {
            string temp = data[old];
            data.erase(old);
            data.insert({nw, temp});
        }
    }

    cout << data.size() << endl;
    for ( auto it = data.begin(); it != data.end(); ++it )
        cout << it->second << ' ' << it->first << endl;

    return 0;
}
