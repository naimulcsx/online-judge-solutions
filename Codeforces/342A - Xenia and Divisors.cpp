#include <bits/stdc++.h>
using namespace std;

int cnt[10];

vector<int> gen_multiples(int n) {
    vector<int> res;
    for (int i = 1; n * i <= 7; ++i) res.push_back(n * i);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    stringstream out;
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        cnt[k]++;
    }

    for (int a = 1; a <= 7; ++a) {
        int a_cnt = cnt[a];
        if (a_cnt > 0) {
            vector<int> amul = gen_multiples(a);
            // foreach multiples of a
            for (auto b: amul) {
                int b_cnt = cnt[b];

                if ( b_cnt > 0 && b > a ) {
                    vector<int> bmul = gen_multiples(b);

                    // foreach multiples of b
                    for (auto c: bmul) {
                        int c_cnt = cnt[c];
                        if ( c_cnt > 0 && c > b ) {
                            int mn = min({a_cnt, b_cnt, c_cnt});
                            a_cnt -= mn, b_cnt -= mn, c_cnt -= mn;
                            cnt[a] = a_cnt, cnt[b] = b_cnt, cnt[c] = c_cnt;
                            while(mn--) out << a << ' ' << b << ' ' << c << endl;
                        }
                    } 
                }
            }
        }
    }

    for (int i = 1; i <= 7; ++i) {
        if (cnt[i] != 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << out.str();    
    return 0;
}
