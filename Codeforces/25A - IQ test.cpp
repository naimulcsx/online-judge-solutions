#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int input, even_count = 0, 
    odd_count = 0, even_pos, odd_pos, j = 1;

    while(n--) {
        cin >> input;

        if ( input % 2 == 0 )
            even_count++,
            even_pos = j;
        else
            odd_count++,
            odd_pos = j;

        ++j;
    }
    
    if ( even_count == 1 ) cout << even_pos << endl;
    else if ( odd_count == 1 ) cout << odd_pos << endl;
    return 0;
}
