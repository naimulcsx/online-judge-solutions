#include <bits/stdc++.h>

typedef unsigned long long int ulli;
using namespace std;

int main() {
    ulli x;
    vector<double> results;

    while( scanf("%lld", &x) != EOF )
        results.push_back( sqrt(x) );

    for (int i = results.size() - 1; i >= 0; i--)
        printf( "%.4lf\n", results[i] );

    return 0;
}