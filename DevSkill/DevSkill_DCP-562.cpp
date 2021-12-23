#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int a, b;
        cin >> a >> b;

        if (a > b)
            cout << "Argentina "<< a << " - " << b << " Brazil" << endl;
        else
            cout << "Brazil "<< b << " - " << a << " Argentina" << endl;
    }

    return 0;
}