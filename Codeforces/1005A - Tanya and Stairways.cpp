#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> pos;
    int input, count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if ( input == 1 ) count++, pos.push_back(i);
    }

    cout << count << endl;
    for ( int i = 0; i < pos.size() - 1; ++i ) {
        int count = pos[i + 1] - pos[i];
        cout << count << " ";
    }

    cout << n - pos[ pos.size() - 1 ] << endl;
    return 0;
}
