#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int i = 0, j, rev_count = 0, p, q;

    while ( i < n - 1 ) {
        j = i;
        bool has_reversed_portion = false;

        while( j < n - 1 && arr[j] > arr[j + 1] ) 
            ++j, has_reversed_portion = true;

        if ( has_reversed_portion ) {
            rev_count++;

            // if there were no reversed portions, save the range
            if ( rev_count == 1 )
                p = i, 
                q = j;

            // if there were reversed portions before, break out of the loop
            // because the list can not be sorted
            else if ( rev_count > 1 ) 
                break;
        }

        i = j + 1 ;
    }

    if ( rev_count == 0 )
        cout << "yes" << endl,
        cout << 1 << " " << 1 << endl;

    else if ( rev_count > 1 )
        cout << "no" << endl;

    else if ( rev_count == 1 ) {
        int max = arr[p], min = arr[q];
        bool flag1 = true , flag2 = true ;

        // from 0 to p - 1 all the elements are less or equal than arr[q]
        for ( int i = 0; i < p; ++i ) {
            if ( arr[i] > min ) {
                flag1 = false;
                break;
            }
        }

        // from q to n - 1, all elements should greater or equal than arr[p](max)
        for (int i = q + 1; i < n; ++i) {
            if ( arr[i] < max ) {
                flag1 = false;
                break;
            }
        }

        if ( flag1 && flag2 )
            cout << "yes" << endl,
            cout << p + 1 << " " << q + 1 << endl;

        else 
            cout << "no" << endl;
    }

    return 0;
}
