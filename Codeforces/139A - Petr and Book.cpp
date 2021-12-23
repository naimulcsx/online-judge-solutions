#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(7);
    
    int sum = 0, done = 0, i = 0;
    for (auto &el: arr) cin >> el, sum += el;
    
    while( done < n ) {
        done += arr[i % 7];
        i++;
    }   

    if (i % 7 == 0) cout << 7 << endl;
    else cout << i % 7 << endl;
    return 0;   
}
