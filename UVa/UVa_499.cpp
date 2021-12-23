#include <bits/stdc++.h>
using namespace std;

vector<char> get_frequent_letters(map<char, int> &);
int get_max_frequency(map<char, int> &);

int main() {
    
    string s;
    while(getline(cin, s)) {
        map<char, int> data;
        for (auto ch: s) {
            if (!isalpha(ch)) continue;

            if (!data.count(ch))
                data[ch] = 1;
            else
                data[ch]++;
        }

        vector<char> result = get_frequent_letters(data);
        for (auto ch: result)
            cout << ch;

        cout << " " <<  get_max_frequency(data) << endl;
    }

    return 0;
}

int get_max_frequency(map<char, int> &data) {
    int max = 0;
    for (auto it = data.begin(); it != data.end(); it++)
        if (it->second > max) 
            max = it->second;
    return max;
}

vector<char> get_frequent_letters(map<char, int> &data) {
    vector<char> result;
    
    int max = get_max_frequency(data);

    for (auto it = data.begin(); it != data.end(); it++)
        if (it->second == max)
            result.push_back(it->first);

    sort(result.begin(), result.end());
    return result;
}
