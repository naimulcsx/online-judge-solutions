#include <iostream>
using namespace std;

int main(void) {

    int t;
    cin >> t;
    while(t--) {
        int n, p;
        cin >> n >> p;

        int arr[p];
        bool result[n + 1] {false};
        for (int i = 0; i < p; ++i)
            cin >> arr[i];

        
        for (int j = 0; j < p; ++j) {
            int hartal_parameter = arr[j];
            for (int i = 1; i <= n; ++i) {
                if ( i % hartal_parameter == 0 )
                    result[i] = true;
            }
        }
            
        int count = 0;
        for ( int i = 1; i <= n; ++i )
            if ( i % 7 != 0 && i % 7 != 6 && result[i] )
                count++;

        cout << count << endl;
    }
    return 0;
}
