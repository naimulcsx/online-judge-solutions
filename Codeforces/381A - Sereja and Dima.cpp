#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, input;
    cin >> n;

    deque<int> data;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        data.push_back(input);
    }

    int sereja = 0, dima = 0, count = 1;
    while( data.size() != 0 ) {
        int last, first;
        first = data[0];
        last = data[data.size() - 1];

        if (first > last) data.pop_front();
        else data.pop_back();

        // sereja's turn
        if ( count % 2 == 1 ) {
            if (first > last) sereja += first;
            else sereja += last;
        }

        // dima's turn
        else {
            if (first > last) dima += first;
            else dima += last;
        }

        count++;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
