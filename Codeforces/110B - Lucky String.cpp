#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    scanf("%d", &n);

    unordered_map<int, char> mp {
        {1, 'a'}, {2, 'b'}, {3, 'c'}, {0, 'd'} 
    };

    /* 4 | (a - b) */
    for (int i = 1; i <= n; ++i) printf("%c", mp[i % 4]);
    printf("\n");
    return 0;
}