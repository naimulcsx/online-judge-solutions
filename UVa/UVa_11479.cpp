#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int ulli;

int main () {

    ulli n, c = 1;
    cin >> n;
    
    while(n--) {
        ulli side_lens[3];
        cin >> side_lens[0] >> side_lens[1] >> side_lens[2];
        sort(side_lens, side_lens + 3);

        set<ulli> unq;
        for (int i = 0; i < 3; i++)
            unq.insert(side_lens[i]);

        cout << "Case " << c << ": ";
        
        if ( side_lens[0] + side_lens[1] <= side_lens[2] )
            cout << "Invalid" << endl;

        else if ( unq.size() == 3 )
            cout << "Scalene" << endl;

        else if ( unq.size() == 2 )
            cout << "Isosceles" << endl;

        else if ( unq.size() == 1 )
            cout << "Equilateral" << endl;

        c++;
    }

    return 0;
}
