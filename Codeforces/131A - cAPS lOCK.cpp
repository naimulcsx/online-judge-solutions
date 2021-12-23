#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void capitalize_word(string &);

int main() {
    string input;
    cin >> input;

    capitalize_word(input);
    cout << input << endl;

    return 0;
}

void capitalize_word(string &str) {
    int j = 0, upper_count = 0, lower_count = 0;

    // get the number of upper a lower counts
    while( j < str.length() ) {
        ( islower(str.at(j)) ) ? lower_count++ : upper_count++;
        j++;
    }

    // if the upper_count is length - 1, and lower_count is 1
    if (lower_count == 1 && upper_count == str.length()  - 1 && islower(str.at(0))) {
        str.at(0) = toupper(str.at(0));
        int i = 1;

        while(i < str.length()) {
            if (isupper(str.at(i))) 
                str.at(i) = tolower(str.at(i));

            i++;
        }
    } else if (lower_count == 0 && upper_count == str.length() ) {
        int i = 0;

        while(i < str.length()) {
            str.at(i) = tolower(str.at(i));
            i++;
        }
    }
}