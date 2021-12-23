#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool is_good_number(string, int);

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    while (n--) {
        string input;
        cin >> input;
        if ( is_good_number(input, k) ) 
            count++;
    }

    cout << count << endl;
    return 0;
}

bool is_good_number(string input, int k) {
    char ch = k + '0';
    map<char, int> freq;

    for (auto letter: input) {
        if (!freq.count(letter))
            freq[letter] = 1;
        else
            freq[letter]++;
    }

    for (int i = 0; i <= k; i++)
        if (!freq.count(i + '0'))
            return false;

    return true;
}