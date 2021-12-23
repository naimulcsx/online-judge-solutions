#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> str >> n;
    
    vector<int> arr(n), prefix( str.size() );
    for (auto &el: arr) cin >> el, prefix[el]++;
    for (int i = 1; i < (int) str.size(); ++i) prefix[i] += prefix[i - 1]; 
    
    int max = str.size() / 2 + (str.size() % 2), 
        len = str.size();

    for (int i = 1; i <= max; ++i) {
        int l = i - 1, r = len - i;
        if (prefix[i] & 1) swap(str[l], str[r]);
    }

    cout << str << endl;
    return 0;
}
