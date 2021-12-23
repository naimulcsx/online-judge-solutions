#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int n;
bitset<1001000> marks;
vector<pair<char, int>> arr, af;
int main() {
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        char ch; int val;
        cin >> ch >> val;
        if (ch == '+') marks[val] = true;
        else if (ch == '-') {
            if ( marks[val] ) marks[val] = false;
            else af.push_back( {'+', val} );
        }
        arr.push_back({ch, val});
    }
    
    for (auto el: arr) af.push_back(el);
    int l = af.size(), i = 0, cnt = 0, mx = -1;
    while( i < l ) {
        if (af[i].first == '+') cnt++, mx = max(mx, cnt);
        else cnt--;
        ++i;
    }

    cout << mx << endl;
    return 0;
}
