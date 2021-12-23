/*
Problem Link:
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/description/
*/

#include <iostream>
using namespace std;
using ulli = unsigned long long int;

int main() {
    ios::sync_with_stdio(false);
    ulli n;
    cin >> n;
    ulli res = 1, input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        res = (res * input) % 1000000007;
    }
    cout << res << endl;
    return 0;
}
