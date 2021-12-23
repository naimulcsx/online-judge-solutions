#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll n, r, avg, sum;
pair<int, int> arr[100100];

int main() {
    cin >> n >> r >> avg;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
        sum += arr[i].first;
    }

    sort(arr, arr + n, [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });
    
    ll res = 0;
    for ( int i = 0; i < n; ++i ) {
        ll curr_avg = (sum - arr[i].first + r) / n;
        
        if ( curr_avg >= avg ) {
            ll lo = arr[i].first, hi = r, val = INT_MAX;

            while( lo <= hi ) {
                ll mid = (hi + lo) / 2;
                ll midval = (sum - arr[i].first + mid) / n;
                if ( midval >= avg ) {
                    val = min(val, mid);
                    hi = mid - 1;
                }
                else lo = mid + 1;
            }

            res += (val - arr[i].first) *  arr[i].second;
            sum = sum - arr[i].first + val;
            break;
        }
        
        else {
            res += (r - arr[i].first) * arr[i].second;
            sum = sum - arr[i].first + r;
        }
    }

    cout << res << endl;
    return 0;
}
