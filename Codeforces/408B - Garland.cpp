#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    string sheets, target;
    cin >> sheets >> target;

    unordered_map<char, int> freq, freq1;
    for (auto el: sheets) freq[el]++;
    for (auto el: target) freq1[el]++;

    int cnt = 0;
    bool flag = true;
    for ( auto it = begin(freq1); it != end(freq1); ++it ) {

        if ( !freq.count(it->first) )  {
            flag = false;
            break;
        } else {

            if ( it->second > freq[it->first] ) 
                cnt += freq[it->first];
            else 
                cnt += it->second;

        }
    }

    if (flag) cout << cnt << endl;
    else cout << -1 << endl;

    return 0;
}