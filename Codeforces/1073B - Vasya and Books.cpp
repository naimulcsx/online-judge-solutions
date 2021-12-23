#include <bits/stdc++.h>
using namespace std;

int pos[201000];
bool taken[201000];

int main() {    
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        pos[a[i]] = i;
    }

    for (int i = 0; i < n; ++i) {
        int k;
        scanf("%d", &k);
        if ( taken[k] ) {
            printf("0 ");
            continue;
        }

        int p = pos[k], cnt =  0;

        while(p >= 0) {
            if ( taken[a[p]] ) break;
            taken[a[p]] = 1;
            cnt++;
            p--;
        }
        
        printf("%d ", cnt);
    }
    return 0;   
}
