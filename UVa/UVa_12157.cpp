#include <iostream>
using namespace std;

inline int calc_mile(int);
inline int calc_juice(int);

int main() {

    int t, c = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        // input
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        int mile_total = 0, juice_total = 0;
        for (int i = 0; i < n; ++i) {
            mile_total += calc_mile( arr[i] );
            juice_total += calc_juice( arr[i] );
        }

        cout << "Case "<< c << ": " ;
        if (mile_total < juice_total)
            cout << "Mile " << mile_total << endl;
        else if (juice_total < mile_total)
            cout << "Juice " << juice_total << endl;
        else 
            cout << "Mile Juice "<< mile_total << endl;

        c++;
    }

    return 0;
}

inline int calc_mile(int n) {
    int total = 10;
    n -= 29;
    while(n > 0) {
        n -= 30;
        total += 10;
    }
    return total;
}

inline int calc_juice(int n) {
    int total = 15;
    n -= 59;
    while(n > 0) {
        n -= 60;
        total += 15;
    }
    return total;
}
