#include <iostream>
#include <string>
#include <map>

using namespace std;
string generate_password(int, int);

int main() {
    int password_length, password_distint_chars;
    cin >> password_length >> password_distint_chars;

    string password = generate_password(password_length, password_distint_chars);
    cout << password << endl;
}

string generate_password(int len, int dist_chars) {
    string result = "";

    map<char, int> data;
    for (int i = 0, j = 97; i < 26; i++, j++)
        data.insert(make_pair(j, 1));

    for (int i = dist_chars, j = 97 + dist_chars; i < 26; i++, j++) 
        data[j] = 0;


    map<char, int>::iterator it;
    for (it = data.begin(); it != data.end(); it++)
        if (it->second == 1) 
            result += it->first;

    for (int i = dist_chars, j = 0; i < len; i++, j++)
        result += result.at(j);


    return result;
}