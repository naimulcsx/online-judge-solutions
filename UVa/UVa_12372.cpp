#include <bits/stdc++.h>
using namespace std;

struct gift_box {int height, width, length;};
bool will_fit(gift_box *);

int main(void) {
    int t, c = 1;
    cin >> t;
    while(t--) {
        gift_box x;
        cin >> x.length >> x.width >> x.height;

        cout << "Case " << c << ": ";

        if ( will_fit(&x) )
            cout << "good" << endl;
        else
            cout << "bad" << endl;

        c++;
    }
    return 0;
}

bool will_fit(gift_box *x) {
    if (x->height > 20 || x->width > 20 || x->length > 20)
        return false;
    return true;
}
