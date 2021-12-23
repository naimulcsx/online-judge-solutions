#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;
    
    int i = 0, j = 1;
    string res = "";
    while ( i < n ) {
        res += s[i];
        
        i += j;
        j++;
    }

    cout << res << endl;
    return 0;
}
