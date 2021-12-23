#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    deque<int> arr(n);
    for (auto &el: arr) cin >> el;

    
    string res = "";
    int prev = 0;
    while( arr.size() > 0 ) {
        if (arr.front() < arr.back()) {
            if (arr.front() > prev) {
                res += 'L';
                prev = arr.front();
                arr.pop_front();
            } else if ( arr.back() > prev ) {
                res += 'R';
                prev = arr.back();
                arr.pop_back();
            } else break;
        }
        
        else if ( arr.back() < arr.front() ) {
            if ( arr.back() > prev ) {
                res += 'R';
                prev = arr.back();
                arr.pop_back();
            } else if ( arr.front() > prev ) {
                res += 'L';
                prev = arr.front();
                arr.pop_front();
            } else break;
        } 
        
        else {
            if (arr.front() > prev) res += 'L';
            break;
        }
    }

    cout << res.size() << endl;
    cout << res << endl;
    return 0;   
}
