#include <bits/stdc++.h>
using namespace std;

void correct(int &n) {
    n += 24;
    n = n % 24;
}

int main() {
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);


    int h3 = h1 - h2, m3 = m1 - m2;
    if (h3 < 0) correct(h3);
    if (m3 < 0) {
        m3 += 60; 
        h3--;
        if (h3 < 0) correct(h3);
    }

    printf("%.2d:%.2d\n", h3, m3);
    return 0;
}
