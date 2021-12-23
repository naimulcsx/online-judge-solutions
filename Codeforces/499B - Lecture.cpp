#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    string first, second;
    map<string, string> data;
    while(m--) {
        cin >> first >> second;
        data.insert({first, second});
    }

    string word, result = "";
    for (int i = 0; i < n; ++i) {
        cin >> word;

        if ( word.length() <= data[word].length() )
            result += word, result += " ";
        else
            result += data[word], result += " ";
    }

    cout << result << endl;
    return 0;
}
