#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> data;

    while(n--) {
        string s;
        cin >> s;

        if (!data.count(s))
            data[s] = 1;
        else 
            data[s]++;
    }

    string winner; int max = 0;
    for (auto it = data.begin(); it != data.end(); it++)
        if (it->second > max) {
            max = it->second;
            winner = it->first;
        }
        
    cout << winner << endl;
    return 0;
} 
