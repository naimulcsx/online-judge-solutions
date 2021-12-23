#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    a--; // 0'based index

    // input list
    int arr[n], i, j, count;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // i and j points to the prev and next city from city 'a'
    i = a - 1; j = a + 1; count = 0;
    // if there are criminal on the city where the police lives, count
    if (arr[a] == 1) count++;

    // keep counting where for citys distance from city 'a'
    while( i >= 0 && j < n ) {
        if ( arr[i] == arr[j] && arr[i] == 1 )
            count += 2;

        i--, j++;
    }

    // count criminals for rest of the cities
    if ( i < 0 ) {
        for (int k = j; k < n; ++k)
            if (arr[k] == 1)
                count++;
    }

    else if ( j == n ) {
        for (int k = i; k >= 0; --k)
            if (arr[k] == 1)
                count++;
    }

    cout << count << endl;
    return 0;
}
