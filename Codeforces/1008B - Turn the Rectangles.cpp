#include <bits/stdc++.h>
using ll = long long;
using namespace std;

pair<int, int> arr[100100];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) 
        cin >> arr[i].first >> arr[i].second;

    if (arr[0].first > arr[0].second) 
        swap(arr[0].first, arr[0].second);
    
    for (int i = 1; i < n; ++i) {
        if (arr[i].first > arr[i - 1].second && arr[i].second > arr[i - 1].second) {
            cout << "NO" << endl;
            return 0;
        }
        
        else if ( arr[i].first <= arr[i - 1].second && arr[i].second <= arr[i - 1].second ) {
            int t = min(arr[i].first, arr[i].second);
            arr[i].second = max(arr[i].first, arr[i].second),
            arr[i].first = t;
        }

        else {
            int t = max(arr[i].first, arr[i].second);
            arr[i].second = min(arr[i].first, arr[i].second),
            arr[i].first = t;
        }
    }

    cout << "YES" << endl;
    return 0;
}
