#include <bits/stdc++.h>    
using namespace std;

int col_decode(char ch) { return ch - ('A' - 1); }

string col_decode(int n) {
    string letters = "_ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (n <= 26) {
        string res(1, letters[n]);
        return res;
    }
    else {
        int m = n % 26;
        if (m == 0) return col_decode(n / 26 - 1) + "Z";
        else return col_decode(n / 26) + letters[m];
    }
}

int col_decode(string s) {
    if (s.length() == 1)
        return col_decode(s[0]);

    else if (s.length() == 2) 
        return 26 * col_decode(s[0]) + col_decode(s[1]);

    else if (s.length() == 3)
        return 26 * col_decode( s.substr(0, 2) ) + col_decode(s[2]);

    else if (s.length() == 4)
        return 26 * col_decode(s.substr(0,3) ) + col_decode(s[3]);

    else if (s.length() == 5)
        return 26 * col_decode( s.substr(0,4) ) + col_decode(s[4]);
} 

int main(void) {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        string line;
        cin >> line;

        vector<pair<int, int>> chars;
        for (int i = 0; i < line.length(); ++i)
            if ( isalpha(line[i]) ) 
                chars.push_back({line[i], i});

        if (chars.size() == 2 && 
            chars[0].first == 'R' && 
            chars[1].first == 'C' && 
            abs(chars[1].second - chars[0].second) != 1 ) {

            stringstream ss(line);
            char t; int r, c;
            ss >> t >> r >> t >> c;
            cout << col_decode(c) << r << endl;
        } else {
            stringstream ss(line);
            string col = "", row = ""; char ch;
            while(ss >> ch) {
                if ( isdigit(ch) ) row += ch;
                if( isalpha(ch) ) col+= ch;
            }

            cout << "R" << row <<  "C" << col_decode(col) << endl;
        }
    }

    return 0;
}
