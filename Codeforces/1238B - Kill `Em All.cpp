#include <bits/stdc++.h>
using ll = long long;
using namespace std;
 
 
int arr[100100];
 
int main() {
    ios::sync_with_stdio(false);
 
    int t;
    cin >> t;
    
    while(t--) {
        int n, r;
        cin >> n >> r;
 
        int mx = 0;
        for (int i = 1; i <= n; ++i)
            cin >> arr[i];
        
        sort(arr + 1, arr + n + 1, [](int a, int b) {return a > b;});
 
        int i = 1, dx = 0, res = 0;
        while(i <= n) {
            int j = i + 1, cnt = 0;
            int curr_val = arr[i] - dx;
            if (curr_val <= 0) break;
            while( j <= n  && (arr[j] - dx) == curr_val ) j++, cnt++;
            res++;
            dx += r;
            i = j;
        }
 
        cout << res << '\n';
    }
    
    return 0;
}