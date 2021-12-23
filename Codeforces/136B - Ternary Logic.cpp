#include <bits/stdc++.h>
using namespace std;

string base3(int n, string res = "");
int dec(string n);
void prefix_zero(string &src, int n);

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    int a, c;
    cin >> a >> c;
    string a_base3 = base3(a), c_base3 = base3(c);

    if (a_base3.length() < c_base3.length())
        prefix_zero(a_base3, c_base3.length() - a_base3.length());

    else if ( c_base3.length() < a_base3.length() )
        prefix_zero(c_base3, a_base3.length() - c_base3.length());


    int length =  a_base3.length();
    string b_base3( length, '0' );

    for (int i = 0; i < length; ++i) {
        if (c_base3[i] == '0')
            b_base3[i] = '3' - a_base3[i] + '0';

        else if (c_base3[i] == '1')
            b_base3[i] = '1' - a_base3[i] + '0';

        else if (c_base3[i] == '2')
            b_base3[i] = '2' - a_base3[i] + '0';

        if (b_base3[i] < '0') b_base3[i] += 3;
        if (b_base3[i] >= '3') b_base3[i] -= 3;
    }

    cout << dec(b_base3) << endl;
    return 0;
}

string base3(int n, string res) {
    res += to_string(n % 3);
    if (n < 3) {
        reverse( res.begin (), res.end() );
        return res;
    }
    return base3(n / 3, res);
}

int dec(string n) {
    int length = n.length(), res = 0, p = 0;
    for (int i = length - 1; i >= 0; --i) {
        int dig = n[i] - '0';
        res += dig * pow(3, p);
        p++;
    }
    return res;
}

void prefix_zero(string &src, int n) {
    string res(n, '0');
    res += src;
    src = res;
}
