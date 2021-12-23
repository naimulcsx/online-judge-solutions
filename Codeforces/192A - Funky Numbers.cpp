#include <bits/stdc++.h>
using namespace std;

vector<int> trig_nums;
void gen(int lim) {
    int n = 1, step = 2;
    while(true) {
        if (n > lim) break;
        trig_nums.push_back(n);
        n += step++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    gen(1e9);
    int n;
    cin >> n;

    int l = (int) trig_nums.size();
    for (int i = 0; i < l; ++i) {
        if (  binary_search(begin(trig_nums), end(trig_nums), n - trig_nums[i]) ) {
            cout << "YES" << endl;
            return 0;
        }
    } 

    cout << "NO" << endl;
    return 0;   
}
