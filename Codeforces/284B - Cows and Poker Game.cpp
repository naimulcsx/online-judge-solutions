#include <bits/stdc++.h>
using namespace std;

int cnt[100];

int main() {
    int n;
    string str;
    cin >> n >> str;
    for (auto el: str) cnt[el]++;

    int res = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'A' || str[i] == 'I') {
            cnt[str[i]]--;
            if (cnt['I'] == 0) res++ ;
            cnt[str[i]]++;
        }
    }
    
    cout << res << endl;
    return 0;
}