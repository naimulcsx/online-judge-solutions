#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    map<string, string> data 
        {
            {"purple", "Power."},
            {"green", "Time."},
            {"blue", "Space."},
            {"orange", "Soul."},
            {"red", "Reality."},
            {"yellow", "Mind."}
        };

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        data[s].at( data[s].length() - 1 ) = '!';
    }

    int count = 0, len;
    for (auto it = data.begin(); it != data.end(); ++it)
        if ( data[it->first].at( data[it->first].length() - 1 ) == '.' )
            count++;

    cout << count << endl;
    for (auto it = data.begin(); it != data.end(); ++it) {
        len = data[it->first].length();
        if ( data[it->first].at( len - 1 ) == '.' ) {
            data[it->first].pop_back();
            cout << it->second << endl;
        }
    }

    return 0;
}
