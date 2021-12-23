#include <iostream>
#include <string>

using namespace std;
bool will_output(string &);

int main() {
    string input;
    cin >> input;

    if ( will_output(input) )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


bool will_output(string &str) {
    bool is_valid = false, i = 0;

    for (char ch: str) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            is_valid = true;
            break;
        }
    }

    return is_valid;
}