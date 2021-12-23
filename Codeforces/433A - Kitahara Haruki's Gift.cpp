#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0, hunds = 0, thunds = 0;
    for (auto &el: arr) {
        cin >> el;
        sum += el;
        if (el == 100) hunds++;
        else if (el == 200) thunds++;
    }

    if (thunds == 0 && hunds % 2 == 0) cout << "YES" << endl;
    else if (thunds % 2 == 0 && hunds == 0) cout << "YES" << endl;
    else if (sum % 200 == 0 && hunds > 0 && thunds > 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    

    return 0;   
}
