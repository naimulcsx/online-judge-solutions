#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, res = "";

    for (int i = 0; i < 3; ++i) {
        cin >> str;
        if (str[1] == '>') {
            res += str[0];
            res += str[2];
            continue;
        } 
        res += str[2];
        res += str[0];
    }

    char lg = 0, md = 0, sm = 0;
    // get the large coin
    if ( res[0] == res[2] && res[1] != res[3] )
        lg = res[0];
    if ( res[2] == res[4] && res[3] != res[5] )
        lg = res[2];
    if ( res[4] == res[0] && res[5] != res[1] )
        lg = res[4];

    // get the small coin
    if ( res[1] == res[3] && res[0] != res[2] )
        sm = res[1];
    if ( res[3] == res[5] && res[4] != res[2] ) 
        sm = res[3];
    if ( res[1] == res[5] && res[0] != res[4] )
        sm = res[1];


    if ( (sm == 'A' && lg == 'B') || (sm == 'B' && lg == 'A') )
        md = 'C';
    else if ( (sm == 'B' && lg == 'C') || (sm == 'C' && lg == 'B') )
        md = 'A';
    else if ((sm == 'C' && lg == 'A') || (sm == 'A' && lg == 'C'))
        md = 'B';


    if (isalpha(lg) && isalpha(md) && isalpha(sm))
        cout << sm << md << lg << endl;
    else
        cout << "Impossible" << endl;

    return 0;
}
