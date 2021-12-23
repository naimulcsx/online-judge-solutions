#include <bits/stdc++.h>
using namespace std;

using ulli = unsigned long long int;
bool marks[10] {false};

bool check(char ch) {
    string s = "aeiou13579";
    return s.find(ch) != string::npos;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    
    int count = 0;
    for (auto ch: s)
        if ( check(ch) ) count++;

    cout << count << endl;
    return 0;
}
