#include <iostream>
#include <ctime>
using namespace std;

struct single {int d, m, y, c;};
void init(struct tm &);

int main() {

    int n;
    while( cin >> n && n ) {
        single data[n];
        for (int i = 0; i < n; ++i) 
            cin >> data[i].d >> data[i].m >> data[i].y >> data[i].c;


        struct tm a, b;
        int count = 0, total = 0;
        for (int i = 0; i < n - 1; ++i) {
            init(a); init(b);

            a.tm_mon = data[i].m - 1;
            a.tm_mday = data[i].d;
            a.tm_year = data[i].y - 1900;

            b.tm_mon = data[i + 1].m - 1;
            b.tm_mday = data[i + 1].d;
            b.tm_year = data[i + 1].y - 1900;

            if (mktime(&b) - mktime(&a) == 86400) {
                count++;
                total += data[i + 1].c - data[i].c;
            }
        }

        cout << count << " " << total << endl;
    }
    return 0;
}

void init(struct tm &x) {
    x.tm_hour = x.tm_wday = x.tm_yday = x.tm_mon = x.tm_min = x.tm_gmtoff = x.tm_mday = x.tm_sec = x.tm_isdst = x.tm_year = 0;
}