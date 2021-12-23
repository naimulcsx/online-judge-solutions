#include <bits/stdc++.h>
using namespace std;

string str, res;

unordered_map<char, string> mp {
    {'2', "2"},
    {'3', "3"},
    {'4', "322"},
    {'5', "5"},
    {'6', "53"},
    {'7', "7"},
    {'8', "7222"},
    {'9', "7332"}
};

int main() {
    int n;
    cin >> n >> str;

    for (auto el: str) if (el > '1') res += mp[el];
    sort(rbegin(res), rend(res));

    cout << res << endl;
    return 0;
}
