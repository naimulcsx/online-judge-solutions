#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;
    
    
    int b = 1, mx = 0;
    while ( b <= n ) {

        vector<bool> marks(n, true);
        vector<int> is;

        for ( int i = b; i < n; i += k ) is.push_back(i);
        for (int i = b; i >= 0; i -= k) is.push_back(i);

        for (auto el: is) 
            marks[el] = false;
        
        int p = 0, q = 0;
        for ( int i = 0; i < (int) marks.size(); ++i ) {
            if ( marks[i] ) {
                if ( arr[i] == 1 ) p++;
                else if ( arr[i] == -1 ) q++;
            }
        }

        b++;
        mx = max(mx, abs(p - q));
    }

    cout << mx << endl;
    return 0;
}
