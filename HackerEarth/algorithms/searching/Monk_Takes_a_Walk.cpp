/*
Problem link:
https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/
*/

#include <iostream>
using namespace std;

int count_vowels(string s);

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        cout << count_vowels(s) << endl;
    }
    return 0;
}

int count_vowels(string s) {
    int count = 0;
    string vowels = "aeiouAEIOU";

    for (int i = 0; i < s.length(); ++i)
        if (vowels.find(s[i]) != string::npos)
            count++;

    return count;
}
