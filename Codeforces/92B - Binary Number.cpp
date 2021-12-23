#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;

    // first the last one's pos
    int l = num.length() - 1, cnt = 0;
    while( num[l] == '0' ) {
        num.pop_back();
        l--;
        cnt++;
    }

    // get the postions of the zero's
    deque<int> zpos;
    for (int i = l; i >= 0; --i) {
        if (num[i] == '0') zpos.push_back(i);
    }

    while( num.length() != 1 ) {
        int len = num.length();
        if (num[len - 1] == '0') num.pop_back(), cnt++;
        else {
            if ( zpos.size() > 0 ) {
                int top = zpos.front();
                zpos.pop_front();

                // ones after the last zero
                int ocnt = len - (top + 1);
                cnt++;
                for (int i = 0; i < ocnt; ++i) num.pop_back(), cnt++;
                num[top] = '1';

            } else {
                int len = num.length();
                cnt += len + 1;
                num = "1";
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
