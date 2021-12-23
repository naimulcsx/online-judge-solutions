#include <bits/stdc++.h>
using namespace std;

bool marks[100];
vector<int> get_divs(int n) {
    vector<int> res;
    for (int i = 1; i * i <= n; ++i) {
        if (i * i == n) res.push_back(i);
        else if (n % i == 0) {
            res.push_back(i);
            res.push_back(n/i);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    string num = to_string(n);
    for (auto el: num) marks[el] = true;
    
    int cnt = 0;
    vector<int> divs = get_divs(n);
    for (auto el: divs) {
        bool flag = false;
        string x = to_string(el);
        for (auto ch: x) {
            if ( marks[ch] ) {
                flag = true;
                break;
            }
        }
        if (flag) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
