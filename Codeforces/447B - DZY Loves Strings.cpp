#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int w[26];

int main() {
    string str;
    int n, mx = 0;
    cin >> str >> n;
    
    for (int i = 0; i < 26; ++i) 
        cin >> w[i], mx = max(mx, w[i]);

    int len = str.size(), sum = 0;
    for (int i = 1; i <= len; ++i) {
        sum += (w[str[i - 1] - 'a'] * i);
    }

    for (int i = len + 1, k = 0; k < n; ++k, ++i) sum += i * mx;
    printf("%d\n", sum);
    return 0;
}
