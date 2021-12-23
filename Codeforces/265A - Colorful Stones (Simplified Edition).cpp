#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, instructions;
    cin >> str >> instructions;

    int current_pos = 0;
    // if the instruction matches the charecter at current_pos of str, go to the next position
    for (char ch: instructions) {
        if (str.at(current_pos) == ch) 
            current_pos++;
    }

    cout << current_pos + 1 << endl;
    return 0;
}