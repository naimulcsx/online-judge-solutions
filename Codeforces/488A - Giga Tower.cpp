#include <iostream>
using namespace std;
using ll = long long int;

bool is_lucky(int n) {
    string s = to_string(n);
    for (auto it = s.begin(); it != s.end(); it++)
        if (*it == '8') 
            return true;
    return false;
}


int main(void) {
    ll n; 
    int count = 0;
    cin >> n;

    while( !is_lucky(n + 1) ) {
        n++;
        count++;
    }

    cout << count + 1 << endl;
    return 0;
}
