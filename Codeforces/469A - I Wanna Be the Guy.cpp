#include <bits/stdc++.h>
using namespace std;

void set_in(set<int> &, int);

int main(void) {
    int n;
    cin >> n;
    set<int> levels;

    int x, y;
    cin >> x;
    set_in(levels, x);
    cin >> y;
    set_in(levels, y);

    if  (levels.size() == (long long unsigned int) n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
        

    return 0;
}

void set_in(set<int> &s, int n) {
    int input;
    while(n--) {
        cin >> input;
        s.insert(input);
    }
}