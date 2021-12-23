#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    for (auto &el: arr) scanf("%d", &el);
    arr.push_back(0);

    for (int i = 0; i < n; ++i) 
        printf("%d ", arr[i] + arr[i + 1]);
    
    printf("\n");
    return 0;
}
