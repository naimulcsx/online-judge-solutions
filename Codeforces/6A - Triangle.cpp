#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    vector<int> arr(4);
    for (auto &el: arr) cin >> el;
    sort(begin(arr), end(arr));

    bool isTrig = arr[0] + arr[1] > arr[2];
    isTrig |= arr[0] + arr[1] > arr[3];
    isTrig |= arr[1] + arr[2] > arr[3];

    bool isDeg = arr[0] + arr[1] == arr[2];
    isDeg |= arr[0] + arr[1] == arr[2];
    isDeg |= arr[1] + arr[2] == arr[3];

    if (isTrig) cout << "TRIANGLE" << endl;
    else if (isDeg) cout << "SEGMENT" << endl;
    else cout << "IMPOSSIBLE" << endl;
    
    return 0;
}
