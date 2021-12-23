#include <bits/stdc++.h>
using namespace std;

vector<char> get_frequent_letters(map<char, int> &);

int main() {
    int n;
    cin >> n;
    string s, dummy;

    // consume the trailing newline left by cin
    getline(cin, dummy);

    while(n--) {
        getline(cin, s);

        map<char, int> data;
        for (auto ch: s) {
            if ( isalpha(ch) ) {
                if ( !data.count(tolower(ch)) )
                    data[tolower(ch)] = 1;
                else
                    data[tolower(ch)]++;
            }
        }

        vector<char> result = get_frequent_letters(data);
        sort(result.begin(), result.end());
        
        for (auto ch: result)
            cout << ch;
        cout << endl;

    }

    return 0;
}

vector<char> get_frequent_letters(map<char, int> &data) {
    vector<char> result;

    int max = 0;
    for (auto it = data.begin(); it != data.end(); it++)
        if (it->second > max) 
            max = it->second;

    for (auto it = data.begin(); it != data.end(); it++)
        if (it->second == max)
            result.push_back(it->first);

    return result;
}
