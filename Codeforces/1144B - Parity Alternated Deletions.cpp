#include <bits/stdc++.h>
using namespace std;

int arr[2000];


void process(deque<int> &start, deque<int> &other) {
    int curr = 1;
    while( 1 ) {
        if (curr & 1) {
            if (start.size() == 0) break;
            start.pop_front();
        }
        else {
            if (other.size() == 0) break;
            other.pop_front();
        }
        curr++;
    }
}

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int n;
    cin >> n;

    deque<int> odd, even;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] & 1) odd.push_back(arr[i]);
        else even.push_back(arr[i]);
    }

    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    if ( odd.size() > even.size() ) process(odd, even);
    else process(even, odd);

    int res = 0;
    for (auto el: odd) res += el;
    for (auto el: even) res += el;

    cout << res << endl;
    return 0;
}
