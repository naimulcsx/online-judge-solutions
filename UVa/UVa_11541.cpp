#include<bits/stdc++.h> 
using namespace std;

int main () {

    int t, c = 1;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;

        cout << "Case " << c << ": ";

        bool has_char = false;
        for (int i = 0; i < (int) s.length() - 1; i++) {
            if ( isalpha(s[i]) )    
                has_char = true;

            if (has_char) {
                char ch = s[i];
                int j = i + 1;
                while( isdigit(s[j]) ) j++;
                if ( isalpha(s[j]) ) j--;
                string sub = s.substr( i + 1, j );

                int value = atoi( sub.c_str() );
                for (int i = 0; i < value; i++)
                    cout << ch;
            }

            
            has_char = false;
        }
        cout << endl;
        c++;
    }
 
    return 0; 
}
