#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string scale, untouched, left, right;
    cin >> scale >> untouched;

    size_t delim = scale.find("|");
    left = scale.substr(0, delim);
    right = scale.substr(delim + 1);
    int total_length = right.length() + left.length() + untouched.length();

    if ( left.length() + untouched.length() == right.length() )
        cout << left + untouched << "|" << right << endl;

    else if ( right.length() + untouched.length() == left.length() )
        cout << left << "|" << right << untouched << endl;

    else if ( total_length % 2 == 0 ) {
        int left_needs, right_needs;
        left_needs = (total_length / 2) - left.length();
        right_needs = (total_length / 2) - right.length();

        if (left_needs >= 0 && right_needs >= 0) {
            left += untouched.substr(0, left_needs);
            right += untouched.substr(left_needs, right_needs);
            cout << left << "|" << right << endl;
        }

        else cout << "Impossible" << endl;
    }

    else 
        cout << "Impossible" << endl;

    return 0;
}
