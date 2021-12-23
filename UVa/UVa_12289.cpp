#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    while(n--) {
        char str[10];
        cin >> str;
        int length = strlen(str);

        if (length == 3) {
            if ( (str[0] == 'o' && str[1] == 'n') || (str[0] == 'o' && str[2] == 'e') || (str[1] == 'n' && str[2] == 'e') ) {
                cout << "1" << endl;
            } else {
                 cout << "2" << endl;
            }

        } else if (length == 5) {
             cout << "3" << endl;
        }
    }

    return 0;
}