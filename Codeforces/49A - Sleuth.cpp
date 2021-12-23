#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    string str;
    getline(cin, str);
    int len = str.size();

    char l;
    for (int i = len - 1; i >= 0; --i) {
        if (isalpha(str[i])) {
            l = tolower(str[i]);
            break;
        }
    }

    string vowels = "aeiouy";
    if ( binary_search(vowels.begin(), vowels.end(), l) )  
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}
