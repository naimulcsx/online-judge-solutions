#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int n, input;
    cin >> n;
    map<int, int> freq;

    while(n--) {
        cin >> input;
        if ( !freq.count(input) )
            freq.insert({input, 1});
        else
            freq[input]++;
    }

    int mx = 0;
    for(auto it = freq.begin(); it != freq.end(); ++it)
        mx = max(mx, it->second);
    cout << mx << endl;
    
    return 0;
}
