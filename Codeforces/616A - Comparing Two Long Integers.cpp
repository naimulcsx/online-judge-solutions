#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;

    string p, q;
    int i = 0, j = 0;
    while(a[i] == '0') i++;
    while(b[j] == '0') j++;

    p = a.substr(i, a.size() - i);
    q = b.substr(j, b.size() - j);

    if (p.size() < q.size()) cout << "<" << endl;
    else if (p.size() > q.size()) cout << ">" << endl;
    else {
        bool isGreater = false, isEqual = true;
        for (int i = 0; i < (int) p.size(); ++i) {
            if (p[i] != q[i]) {
                isEqual = false;
                if ( p[i] > q[i] ) isGreater = true;
                break;
            }
        }

        if (isEqual) cout << "=" << endl;
        else if (isGreater) cout << ">" << endl;
        else cout << "<" << endl;
    }

    return 0;
}

