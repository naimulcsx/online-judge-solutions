#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, input;
    cin >> n;

    deque<int> data;
    while( n-- )
        cin >> input, data.push_back(input);

    sort(data.begin(), data.end());
    int i = 1;
    while(data.size() != 1) {
        if (i % 2 == 1) data.pop_back();
        else data.pop_front();
        i++;
    }

    cout << data[0] << endl;
    return 0;
}
