#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        
        bool flag = false;
        for (int a = 0; 3 * a <= n; ++a) {
           int q = n - (3 * a);
           if (q % 7 == 0) {
               flag = true;
               break;
           }
        }

        if (flag) printf("YES\n");
        else printf("NO\n");   
    }

    return 0;
}