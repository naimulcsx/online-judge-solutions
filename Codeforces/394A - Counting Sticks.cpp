#include <bits/stdc++.h>
using namespace std;

pair<int, int> get_pos(string &line) {
    int pp, ep;
    for (int i = 0; i < (int) line.length(); ++i) {
        if (line[i] == '+') { 
            pp = i;
        } else if (line[i] == '=') {
            ep = i;
            break;
        }
    }
    return {pp, ep};
}

int main() {
    string line;
    getline(cin, line);
    pair<int, int> pos = get_pos(line);

    string first, second, third;
    first = line.substr(0, pos.first);
    second = line.substr(pos.first + 1, pos.second - 1 - pos.first);
    third = line.substr(pos.second + 1, (int) line.size() - 1 - pos.second);

    // if already correct
    if ( first.size() + second.size() == third.size() ) cout << line << endl;

    // when there is a solution
    else if ( abs( (int) (first.size() + second.size() - third.size()) ) == 2 ) {

        if ( first.size() + second.size() < third.size() ) {
            third.pop_back();
            first += '|';
        } else {
            third += '|';
            if ( first.size() > 1 ) first.pop_back();
            else second.pop_back();
        }   

        // print result
        cout << first << '+' << second << '=' << third << endl;
    } 
    
    // else impossible
    else cout << "Impossible" << endl;
    return 0;
}
