#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> result;

    int i = 0, j;
    while( i < n ) {
        j = i + 1;
        if (s[i] == 'B') {
            while( s[i] == s[j] ) j++;
            result.push_back(j - i);
            i = j;
        }
        i++;
    }

    cout << result.size() << endl;
    for ( int i = 0; i < result.size(); ++i ) {
        if ( i != result.size() - 1 ) cout << result.at(i) << " ";
        else cout << result.at(i) << endl;
    }    
    return 0;
}
