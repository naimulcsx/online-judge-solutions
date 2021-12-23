#include <bits/stdc++.h>
using namespace std;

struct st_mark {
    int T1, T2, F, A;
    int CT[3];
};

int main() {
    int n, c = 1;
    cin >> n;
    while(n--) {
        st_mark data;
        cin >> data.T1 >> data.T2 >> data.F >> data.A;
        cin >> data.CT[0] >> data.CT[1] >> data.CT[2];
        sort(data.CT, data.CT + 3);

        double CT_avg = (data.CT[1] + data.CT[2]) / 2.0;
        double total_marks = data.T1 + data.T2 + data.F + data.A + CT_avg;

        cout << "Case " << c << ": ";

        if (total_marks >= 90)
            cout << "A" << endl;
        else if (total_marks >= 80 && total_marks < 90)
            cout << "B" << endl;
        else if (total_marks >= 70 && total_marks < 80)
            cout << "C" << endl;
        else if (total_marks >= 60 && total_marks < 70)
            cout << "D" << endl;
        else if (total_marks < 60)
            cout << "F" << endl;

        c++;
    }


    return 0;
}
