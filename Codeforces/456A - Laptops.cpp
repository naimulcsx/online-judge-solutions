#include <bits/stdc++.h>
using namespace std;

struct laptop {int price, quality;};
bool alex_happy(laptop *, int);

int main(void) {
    int n;
    cin >> n;
    laptop data[n];

    for (int i = 0; i < n; i++)
        cin >> data[i].price >> data[i].quality;
    
    sort(data, data + n, [](laptop a, laptop b) {
        return a.price < b.price;
    });

    if ( alex_happy(data, n) )
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
    
    return 0;
}

bool alex_happy(laptop *data, int n) {

    for (int i = 0; i < n - 1; i++) {
        if ( data[i].price < data[i + 1].price ) {
            if ( data[i].quality > data[i + 1].quality )
                return true;
        }

        else if ( data[i].price > data[i + 1].price ) {
            if ( data[i].quality < data[i + 1].quality )
                return true;
        }
    }

    return false;
}
