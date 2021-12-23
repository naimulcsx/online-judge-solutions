#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    map<string, int> data;

    while(n--) {
        string s;
        cin >> s;
        if (!data.count(s))
            data.insert({s, 1});
        else
            data[s]++;
    }

    int max = 0;
    for (auto it = data.begin(); it != data.end(); it++)
        if (it->second > max)
            max = it->second;

    cout << max << endl;
    return 0;
}
