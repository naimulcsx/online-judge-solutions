#include <bits/stdc++.h>
using namespace std;

bool is_number(string s) {
    if (s.length() == 1 && s[0] == '0') return true;
    if (s.length() == 0) return false;
    int digit_count = 0;
    for (char ch: s) if (isdigit(ch)) digit_count++;
    if(digit_count == s.length() && s[0] != '0') return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    string line;
    cin >> line;

    char ch; string res = "";
    stringstream ss(line);
    vector<string> data;

    while( ss >> ch ) {
        if ( ch == ',' || ch == ';' ) {
            data.push_back(res);
            res = "";
        } else res += ch;
    }
    data.push_back(res);


    vector<string> nums, strs;
    for (auto s: data) 
        if (is_number(s)) nums.push_back(s);
        else strs.push_back(s);

    if (nums.size() == 0) cout << "-" << endl;
    for (int i = 0; i < nums.size(); ++i) {
        if (i == 0) cout << "\"";
        if (i ==  nums.size() - 1) cout << nums[i] << "\"" << endl;
        else cout << nums[i] << ",";
    }
    
    if (strs.size() == 0) cout << "-" << endl;
    for (int i = 0; i < strs.size(); ++i) {
        if (i == 0) cout << "\"";
        if (i ==  strs.size() - 1) cout << strs[i] << "\"" << endl;
        else cout << strs[i] << ",";
    }

    return 0;
}
