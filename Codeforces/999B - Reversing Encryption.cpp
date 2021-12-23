#include <bits/stdc++.h>
using namespace std;

vector<int> get_divisors(int n) {
    vector<int> result;
    for (int i = 2; i <= n; ++i)
        if (n % i == 0)
            result.push_back(i);
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    string s;
    cin >> n >> s;

    vector<int> divs = get_divisors(n);
    
    for (int d : divs) {
        string temp = s.substr(0, d);
        s.erase(s.begin(), s.begin() + d);
        string temp2 = "";
        reverse(temp.begin(), temp.end());
        temp2 += temp;
        temp2 += s;
        s = temp2;
    }

    cout << s << endl;
    return 0;
}
