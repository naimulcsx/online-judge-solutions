#include <iostream>
#include <string>

using namespace std;
bool is_reversed(const string &, const string &);

int main() {
    string ber_lang, bir_lang;
    cin >> ber_lang >> bir_lang;

    if (is_reversed(ber_lang, bir_lang)) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}

bool is_reversed(const string &s1, const string &s2) {
    if (s1.length() != s2.length())
        return false;

    int j = s1.length() - 1;

    for (char ch: s1) {
        if (ch != s2.at(j))
            return false;
        j--;
    }

    return true;
}