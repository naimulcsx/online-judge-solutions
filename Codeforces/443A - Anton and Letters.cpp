#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;
int count_letters(const string &);

int main() {
    string str;
    getline(cin, str);

    cout << count_letters(str) << endl;
    return 0;
}


int count_letters(const string &string) {
    map<char, int> char_data;

    for (char ch: string) {
        if (isalpha(ch) && !char_data.count(ch))
            char_data.insert(make_pair(ch, 1));
        else if (isalpha(ch))
            char_data[ch]++;
    }

    return char_data.size();
}