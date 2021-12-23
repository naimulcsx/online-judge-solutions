#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string holes = "ADOPQR";

    while(t--) {
        string s;
        int count = 0;
        cin >> s;
        
        for (char ch: s) {
            if (ch == 'B') count += 2;
            else if ( holes.find(ch) != string::npos ) 
                count++;
        }
            
        cout << count << endl;
    }

    return 0;
}
