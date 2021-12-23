#include <iostream>
#include <string>
#include <cctype>

using namespace std;
string correct_case(string &);

int main(void) {

    string input;
    cin >> input;

    cout << correct_case(input) << endl;


    return 0;
}

void str_toupper(string &str) {
    for (int i = 0; i < str.length(); i++)
        if (!isupper(str.at(i)))
            str.at(i) = toupper(str.at(i));
}

void str_tolower(string &str) {
    for (int i = 0; i < str.length(); i++)
        if (!islower(str.at(i)))
            str.at(i) = tolower(str.at(i));
}

string correct_case(string &str) {
    int upper_count {0}, lower_count {0};

    for (char ch: str)
        if (isupper(ch))
            upper_count++;
        else if (islower(ch))
            lower_count++;


    if (upper_count > lower_count)
        str_toupper(str);
    else
        str_tolower(str);

    return str;
}