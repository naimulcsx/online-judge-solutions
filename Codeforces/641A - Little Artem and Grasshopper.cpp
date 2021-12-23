#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> n >> str;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;


    int now = 0, k = 0;
    while (true) {
        if (str[now] == '>') now += arr[now];
        else if (str[now] == '<') now -= arr[now];

        if ( now >= n || now < 0 ) {
            cout << "FINITE" << endl;
            return 0;
        }

        if (k >= 1e6) {
            cout << "INFINITE" << endl;
            return 0;
        }
        k++;
    }
    
    return 0;
}
