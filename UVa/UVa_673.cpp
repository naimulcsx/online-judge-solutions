#include <iostream>
#include <stack>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<char, char> pairs = {{']', '['}, {'}', '{'}, {')', '('}};
    cin.ignore();

    while(n--) {
        string s;
        getline(cin, s);
        stack<char> s1;

        bool is_balanced = true;

        for ( int i = 0; i < s.length(); ++i )  {
            if ( s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[' )
                s1.push( s.at(i) );

            else if (s.at(i) == ')' || s.at(i) == '}'|| s.at(i) == ']') {
                if (s1.size() == 0) {
                    is_balanced = false;
                    break;
                }

                else if ( pairs[ s.at(i) ] == s1.top() ) 
                    s1.pop();

                else {
                    is_balanced = false;
                    break;
                }
            }
        }

        if ( is_balanced && s1.size() != 0 ) is_balanced = false;
        if ( is_balanced ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}
