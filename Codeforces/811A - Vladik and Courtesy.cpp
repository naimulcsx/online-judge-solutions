#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int vladik, valera, turn = 1;
    cin >> vladik >> valera;

    string who_lose = "";
    while(true) {
        
        if (turn % 2 == 1) {
            vladik -= turn;
            if (vladik < 0) {
                who_lose = "Vladik";
                break;
            }
        }

        else {
            valera -= turn;
            if (valera < 0) {
                who_lose = "Valera";
                break;
            }
        }

        turn++;
    }

    cout << who_lose << endl;
    return 0;
}
