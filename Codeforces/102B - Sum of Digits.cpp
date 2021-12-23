#include <bits/stdc++.h>
using namespace std;

string str_digit_sum(const string &s) {
    int total = 0;
    for (auto num: s)
        total += num - '0';
    return to_string(total);
}

int main() {
    string num;
    cin >> num;

    int count = 0;
    while( num.length() != 1 ) {
        num = str_digit_sum(num);
        count++;
    }

    cout << count << endl;
    return 0;
}