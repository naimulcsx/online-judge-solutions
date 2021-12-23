#include <bits/stdc++.h>
using namespace std;

bool is_perfect_square(long double x) {    
  return ( (sqrt(x) - floor( sqrt(x) ) ) == 0 ); 
}

int main() {
    int start, end, count;

    while(1) {
        count = 0;
        cin >> start >> end;
        if (start == 0 && end == 0) break;
        
        for (int i = start; i <= end; i++) {
            if ( is_perfect_square(i) )
                count++;
        }
            
        cout << count << endl;
    }

    return 0;
}
