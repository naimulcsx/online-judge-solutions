#include <bits/stdc++.h>
using namespace std;

string original_text(string &, char);

int main(void) {
    char direction_of_shift; string typed_text;
    cin >> direction_of_shift >> typed_text;

    cout << original_text(typed_text, direction_of_shift) << endl;
    return 0;
}

string original_text(string &text, char direction_of_shift) {
    map<char, char> RTL = { 
        {'s', 'a'}, {'d', 's'}, {'f', 'd'}, {'g', 'f'}, {'h', 'g'}, {'j', 'h'}, {'k', 'j'},
        {'l', 'k'}, {';', 'l'}, {'w', 'q'}, {'e', 'w'}, {'r', 'e'}, {'t', 'r'}, {'y', 't'},
        {'u', 'y'}, {'i', 'u'}, {'o', 'i'}, {'p', 'o'}, {'x', 'z'}, {'c', 'x'}, {'v', 'c'},
        {'b', 'v'}, {'n', 'b'}, {'m', 'n'}, {',', 'm'}, {'.', ','}, {'/', '.'}    
    };

    map<char, char> LTR = { 
        {'q', 'w'}, {'w', 'e'}, {'e', 'r'}, {'r', 't'}, {'t', 'y'}, {'y', 'u'}, {'u', 'i'}, {'i', 'o'}, {'o', 'p'}, {'a', 's'}, {'s', 'd'}, {'d', 'f'}, {'f', 'g'}, {'g', 'h'},
        {'h', 'j'}, {'j', 'k'}, {'k', 'l'}, {'l', ';'}, {'z', 'x'}, {'x', 'c'}, {'c', 'v'},
        {'v', 'b'}, {'b', 'n'}, {'n', 'm'}, {'m', ','}, {',', '.'}, {'.', '/'}
    };
    
    for (auto &ch: text)
        if (direction_of_shift == 'R')
            ch = RTL[ch];
        else if (direction_of_shift == 'L')
            ch = LTR[ch];
        
    return text;
}
