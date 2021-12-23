#include<bits/stdc++.h> 
using namespace std;

int main () {
    int t, c = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ages[n];

        for (int i = 0; i < n; i++) 
            cin >> ages[i];

        cout << "Case " << c << ": ";
        cout << ages[n/2] << endl;
        c++;
    }

    return 0;
}
