#include <iostream>

using namespace std;

int main() {
    int _case = 1;

    while(1) {
        int n, treat_given = 0, treat_for = 0;
        cin >> n;
        if (n == 0) break;

        int arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) treat_given++;
            else treat_for++;
        }

        cout << "Case " << _case << ": " << treat_for - treat_given << endl;
        _case++;
    }
}