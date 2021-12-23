#include <bits/stdc++.h>
using namespace std;

vector<int> val;
int n, arr[120100];
unordered_map<int, int> freq;

int main() {
    cin >> n;
    for (int i = 1; i <= 30; ++i) val.push_back(pow(2, i));
    for (int i = 0; i < n; ++i) cin >> arr[i], freq[arr[i]]++;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        bool flag = false;
        freq[arr[i]]--;

        for ( auto el: val ) {
            if (el <= arr[i]) continue;
            int left = el - arr[i];
            if (freq[left] > 0) {
                flag = true;
                break;
            }
        }

        freq[arr[i]]++;
        if (!flag) cnt++;
    }

    cout << cnt << endl;    
    return 0;   
}
