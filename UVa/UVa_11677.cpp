#include <bits/stdc++.h>
using namespace std;

struct time {int hour, min;};

int main() {
    int hours, min;
    struct time s, e;

    while(1) {
        cin >> s.hour >> s.min >> e.hour >> e.min;
        if (s.hour == 0 && s.min == 0 && e.hour == 0 && e.min == 0)
            break;

        // calculate hours
        if (s.hour < e.hour) 
            hours = e.hour - s.hour;
        else if (s.hour > e.hour) 
            hours = 24 - (s.hour - e.hour);
        else
            hours = (e.min > s.min) ? 0 : 24;
        
        // calculate minutes
        if (s.min > e.min) {
            hours--;
            min = (60 - s.min) + e.min;
        }
        else 
            min = e.min - s.min;

        cout << hours * 60 + min << endl;
    }

    return 0;
}
