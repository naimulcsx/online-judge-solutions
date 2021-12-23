#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ( a + c < b ) printf("-");
    else if ( b + c < a ) printf("+");
    else if (a == b && c == 0) printf("0");
    else printf("?");

    return 0;
}
