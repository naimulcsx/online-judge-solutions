#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string line;
    cin >> n >> line;

    // replace the '_', with spaces
    for_each(line.begin(), line.end(), [](char &ch) {
        if (ch == '_') ch = ' '; 
    });

    vector<pair<int, int>> dup_pos;
    int l, r;
    for (int i = 0; i < (int) line.size(); ++i) {
        if ( line[i] == '(' ) l = i;
        else if (line[i] == ')') {
            r = i;
            dup_pos.push_back({l, r});
        }
    }

    // count words inside brackets
    int words_inside_brackets = 0;
    for (auto el: dup_pos) {
        string word;
        stringstream ss(line.substr(el.first + 1, el.second - el.first - 1));
        while(ss >> word) words_inside_brackets++;
    }

    // mutate the words inside brackets
    for (auto el: dup_pos) {
        for (int i = el.first; i <= el.second; ++i) 
            line[i] = ' ';
    }

    int max_length_of_words = [](string &line) -> int {
        int res = 0;
        string word;
        stringstream ss(line);
        while(ss >> word) res = max( res, (int) word.size() );
        return res;
    }(line);

    cout << max_length_of_words << " " << words_inside_brackets << endl;
    return 0;
}
