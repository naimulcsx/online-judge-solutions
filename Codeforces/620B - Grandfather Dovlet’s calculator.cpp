#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    vector<int> map {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; ++i) {
        string num = to_string(i);
        for (int j = 0; j < (int) num.size(); ++j) 
            cnt += map[num[j] - '0'];
    }
    
    cout << cnt << endl;
    return 0;
}
 
