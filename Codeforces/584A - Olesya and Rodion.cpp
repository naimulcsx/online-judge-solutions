#include <bits/stdc++.h>
using namespace std;

string get_ans(int, int);

int main() {
    int n, t;
    cin >> n >> t;
    cout << get_ans(n, t) << endl;
}


string get_ans(int n, int t) {
    if (n == 1 && t == 10)
        return "-1";
    string result = "";

    // generate n numbers of t digit
    for (int i = n; i > 0; i--)
        if (t != 10)
            result += to_string(t);
        else
            result += to_string(1);

    // if t is 10, replace the last char with a zero
    if (t == 10) {
        result.pop_back();
        result.push_back('0');
    }
    
    
    return result;
}
