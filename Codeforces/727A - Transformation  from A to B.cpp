#include <bits/stdc++.h>
using namespace std;

int main() {    
    int a, b;
    scanf("%d %d", &a, &b);
    deque<int> res {b};

    bool ok = false;
    while( b > 0 ) {
        if (b == a) {  ok = true;  break;  }
        if ( b % 2 == 0 ) b /= 2;
        else if ( b % 10 == 1 )b /= 10;
        else {  ok = false;  break;  }
        res.push_front(b);
    }

    if (!ok) printf("NO");
    else {
        printf("YES\n");
        printf("%d\n", (int) res.size());
        for (auto el: res) printf("%d ", el);
        printf("\n");
    }

    return 0;   
}
