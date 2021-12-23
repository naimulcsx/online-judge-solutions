#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int arr[200200];
 
int main() {
    ios::sync_with_stdio(false);

    int q;
    scanf("%d", &q);

    while(q--) {
        int h, n;
        scanf("%d %d", &h, &n);

        unordered_map<int, bool> mp;
        mp.max_load_factor(0.25);
        mp.reserve(512);


        for (int i = 1; i <= n; ++i) {
            scanf("%d", &arr[i]);
            mp[arr[i]] = 1;
        }
        reverse(arr + 1, arr + n + 1);


        int curr_h = h, cnt = 0;

        while( curr_h > 0 ) {
            if ( curr_h >= 3 ) {
                // (h - 1) moved out hoile
                if ( mp.count(curr_h - 1) ) {

                    // (h - 2) move out hoile
                    if ( mp.count(curr_h - 2) ) {
                        curr_h = curr_h - 2;
                    }

                    // (h - 2) moved out na
                    else {
                        curr_h = curr_h - 2;
                        cnt++;
                    }
                } 
            
                // jodi na hoy
                else {
                    int pos = lower_bound(arr + 1, arr + n + 1, curr_h) - arr;
                    if ( pos == 1 ) break;
                    curr_h = arr[pos - 1] + 1;
                } 
            } else break;
        }
        
        printf("%d\n", cnt);
    }

    return 0;
}