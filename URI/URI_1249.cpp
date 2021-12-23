#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;

    while(getline(cin, input)) {
        for (int i = 0; i < input.length(); i++) {
            if (isupper(input[i])) {
                input[i]  = (((input[i] - 65)  + 13) % 26) + 65;
            }

            if (islower(input[i])) {
                input[i] = (((input[i] - 97) + 13 ) % 26) + 97;
            }
        }

        cout << input << endl;
    }
}