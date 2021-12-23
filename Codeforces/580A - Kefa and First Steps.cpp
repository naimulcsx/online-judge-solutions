#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int count = 0, i = 0;
    while(i < n) {
        int max = 1;
        while(i < n - 1 && arr[i + 1] >= arr[i]) {
            max++;
            i++;
        }

        if (count < max)
            count = max;
        i++;
    }

    cout << count << endl;
    return 0;
}
