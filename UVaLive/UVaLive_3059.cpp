#include <bits/stdc++.h>
using namespace std;

struct data {int time, speed;};

int main() {
    int n;

    while(cin >> n) {
        if (n == -1) 
            break;
        
        data input[n];
        for (int i = 0; i < n; i++)
            cin >> input[i].speed >> input[i].time;

        int total = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0)
                total += input[i].speed * input[i].time;
            else
                total += input[i].speed * (abs(input[i - 1].time - input[i].time));
        }

        cout << total << " miles" << endl;
    }


    return 0;
}
