#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string str;
    cin >> str;

    int a = 0, na = 0;
    for (auto el: str) {
        if (el == 'a') a++;
        else na++;
    }
    
    if (na >= a) cout << str.size() - (na - a + 1) << endl;
    else cout << str.size() << endl;
    return 0;
}
