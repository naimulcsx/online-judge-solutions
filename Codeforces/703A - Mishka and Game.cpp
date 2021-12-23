#include<bits/stdc++.h> 
using namespace std;

struct round {int mishka, chris;};

int main () {
    int n;
    cin >> n;
    struct round data[n];
    for (int i = 0; i < n; i++)
        cin >> data[i].mishka >> data[i].chris;
    
    map<char, int> win_count {{'m', 0}, {'c', 0}};

    for (int i = 0; i < n; i++) {
        if ( data[i].mishka > data[i].chris )
            win_count['m']++;
        else if ( data[i].mishka < data[i].chris  )
            win_count['c']++;
    }

    if (win_count['m'] > win_count['c'])
        cout << "Mishka" << endl;
    else if (win_count['m'] < win_count['c'])
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
    

    return 0;
}
