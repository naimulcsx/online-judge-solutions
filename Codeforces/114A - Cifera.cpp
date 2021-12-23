#include <bits/stdc++.h>
using namespace std;

int main() {    
    int l, k;
    scanf("%d %d", &l, &k);
    
    int cnt = 0;
    bool flag = false;
    while( k != 0 ) {
        if ( k == 1 ) {
            flag = true;
            break;
        }
        
        if ( k % l == 0 ) k /= l;
        else { flag = false; break; }
        cnt++;
    }

    if (!flag) printf("NO\n");
    else printf("YES\n%d\n", cnt - 1);
    return 0;   
}
