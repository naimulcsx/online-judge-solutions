#include <iostream>
#include <string>
using namespace std;

int main() {
    int len; string str;
    cin >> str;
    len = str.length();
    cout << (len + 1) * 26 - len << endl;
    return 0;
}
