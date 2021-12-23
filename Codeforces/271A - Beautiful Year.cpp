#include <iostream>
#include <map>
#include <string>

using namespace std;
int next_distinct_digit_year(int);
bool has_duplicate(string &);

int main() {
    int year;
    cin >> year;
    cout << next_distinct_digit_year(year) << endl;
    return 0;
}


int next_distinct_digit_year(int year) {
    // increase year by one, since we need to check the next year of distnct digits
    // so we skip the input year
    year++;
    string year_str = to_string(year);

    // while the year has duplicates digits, iterate and increment the year by one
    while(has_duplicate(year_str)) {
        year++; 
        year_str = to_string(year);
    }

    return year;
}


bool has_duplicate(string &year_str) {
    map <char, int> data;

    for (char ch: year_str)
        if (data.count(ch))
            data[ch]++;
        else    
            data.insert(make_pair(ch, 1));

    map <char,int>::iterator it;

    // if it has one digit more than 1 times return false
    for (it = data.begin(); it != data.end(); it++) {
        if (it->second > 1)
            return true;
    }

    return false;
}