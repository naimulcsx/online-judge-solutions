#include <bits/stdc++.h>
using namespace std;

bool is_leap_year(int);

int main() {
    int t, c = 1;
    cin >> t;

    while(t--) {
        int d, m, y, y_end, celebrated_birthday_count = 0;
        cin >> d >> m >> y >> y_end;

        cout << "Case " << c << ": ";

        if (m == 2 && d == 29) {
            for (int i = y + 1; i <= y_end; i++)
                if ( is_leap_year(i) )
                    celebrated_birthday_count++;

            cout << celebrated_birthday_count << endl;
        }

        else
            cout << y_end - y << endl;
        c++;
    }

    return 0;
}


bool is_leap_year(int year) {
    if (year % 400 == 0) return true;
    else if (year % 4 == 0 && !(year % 100 == 0)) return true;
    else return false;
}
