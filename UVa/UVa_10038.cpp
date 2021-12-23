#include <bits/stdc++.h>
using namespace std;

void vin(vector<int> &, int);
bool is_jolly(vector<int> &);

int main() {

    int n;
    while ( scanf("%d", &n) != EOF ) {
        vector<int> v;
        vin(v, n);

        if ( is_jolly(v) ) 
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }

    return 0;
}

bool is_jolly(vector<int> &v) {
    vector<int> diff;

    for (int i = 0; i < (int) (v.size() - 1); i++)
        diff.push_back( abs(v[i] - v[i + 1]) );
    
    if (diff.size() == 0 && v.size() == 1)
        return true;

    sort(diff.begin(), diff.end());

    if (diff[0] != 1)
        return false;
    
    for (int i = 0; i < (int) diff.size() - 1; i++) 
        if ( abs(diff[i + 1] - diff[i]) != 1 )
            return false;

    return true;
}

void vin(vector<int> &v, int l) {
    int input;
    while(l--) {
        cin >> input;
        v.push_back(input);
    }   
}
