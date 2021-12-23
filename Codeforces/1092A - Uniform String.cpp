#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int j = 0;
        string res = "";
        for (int i = 0; i < n; ++i) {
            res += 'a' + j;
            if (j == k - 1) j = 0;
            else j++;
        }

        cout << res << endl;
    }
    return 0;
}
