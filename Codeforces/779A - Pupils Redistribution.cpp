#include <bits/stdc++.h>
using namespace std;

int freq1[6], freq2[6];

int main() {    
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; ++i) {
        int k; 
        scanf("%d", &k);
        if (i >= n) freq2[k]++;
        else freq1[k]++;
    }

    int cnt = 0;
    for (int i = 1; i <= 5; ++i) {
        if (freq1[i] == freq2[i]) continue;
        else if ( abs(freq1[i] - freq2[i]) % 2 != 0 ) {
            printf("-1\n");
            return 0;
        }
        cnt += abs(freq1[i] - freq2[i]) / 2;
    }

    printf("%d\n", cnt / 2);
    return 0;   
}
