#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    string of, q;
    cin >> n >> of >> q;

    int months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days[] = {0, 52, 52, 52, 52, 53, 53, 52};
    
    if (q == "week")
        cout << days[n] << endl;

    else if (q == "month") {
        int count = 0;
        for (int i = 0; i < 12; ++i) 
            if (n <= months[i]) count++;
        cout << count << endl;
    }

    return 0;
}
