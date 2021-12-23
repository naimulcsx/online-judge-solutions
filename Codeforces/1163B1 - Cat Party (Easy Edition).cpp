#include <bits/stdc++.h>
using namespace std;


int cnt[12];
unordered_map<int, int> mp;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int res;
    for (int i = 0; i < n; ++i) {
        cnt[arr[i]]++;
        mp[arr[i]]++;

        if (mp.size() == 1) res = i;
        else if (mp.size() == 2) {
            vector<int> arr;
            for (auto el: mp) arr.push_back(el.second);
            if (arr[0] == 1 || arr[1] == 1) res = i;
            else if (abs(arr[0] - arr[1]) == 1) res = i;
        } else {
            // distinct element is more than 2
            unordered_set<int> s;
            for (auto el: mp) s.insert(el.second);

            if (s.size() == 1) {
                int ocr = count(cnt, cnt + 11, 1);
                if (ocr == i + 1) res = i;
            }
            else if ( s.size() == 2 ) {
                vector<int> arr;
                for (auto el: s) arr.push_back(el);
                if (arr[0] > arr[1]) swap(arr[0], arr[1]);

                
                if ( arr[0] == 1 ) {
                    int ocr = count(cnt, cnt + 11, 1);
                    int y = count(cnt, cnt + 11, arr[1]);
                    if (ocr == 1) res = i;
                    else if (y == 1 && arr[1] == 2) res = i;
                } else {
                    int y = count(cnt, cnt + 11, arr[1]);
                    if (y == 1 && arr[0] == arr[1] - 1) res = i;
                }
            }
        }
    }   
    
    cout << res + 1 << endl;
    return 0;
}