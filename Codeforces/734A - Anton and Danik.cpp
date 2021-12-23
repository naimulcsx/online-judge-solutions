#include <iostream>
#include <string>

using namespace std;
string get_winner(const string &);

int main(void) {
    int x;
    string input;
    cin >> x >> input;

    cout << get_winner(input) << endl;

    return 0;
}

string get_winner(const string &str) {
    int anton_win_count {0}, danik_win_count {0};

    for (char ch: str)
        if (ch == 'A')
            anton_win_count++;
        else
            danik_win_count++;

    if (anton_win_count > danik_win_count)
        return "Anton";
    else if (anton_win_count < danik_win_count)
        return "Danik";
    else 
        return "Friendship";
}