#include <bits/stdc++.h>
using ll = long long;
using namespace std;

vector<int> neg, pos, z;

void print(vector<int> &arr) {
    cout << arr.size() << ' ';
    for (auto el: arr) cout << el << ' ';
    cout << endl;
}
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int k;
        cin >> k;
        if ( k < 0 ) neg.push_back(k);
        else if ( k > 0 ) pos.push_back(k);
        else z.push_back(k);
    }

    if ( pos.size() == 0 ) { 
        for (int i = (int) neg.size() - 1, j = 0; j < 2; --i, ++j) {
            pos.push_back(neg.back());
            neg.pop_back();
        }
    }

    if ( neg.size() % 2 == 0 ) {
        z.push_back(neg.back());
        neg.pop_back();
    }

    print(neg);
    print(pos);
    print(z);

    return 0;
}
