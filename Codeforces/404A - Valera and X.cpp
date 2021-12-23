#include <bits/stdc++.h>
using namespace std;

bool forms_x(vector< vector<int> > &);
bool is_diagonal(int, int, int);
bool is_same_char(vector<vector<int> > &);

int main() {

    int n;
    cin >> n;
    vector< vector<int> > data;

    for (int i = 0; i < n; i++) {
        vector<int> x;
        for (int j = 0; j < n; j++) {
            char ch;
            cin >> ch;
            x.push_back(ch);
        }
        data.push_back(x);
    }
    
    if ( forms_x(data) && is_same_char(data) )
        cout << "YES"  << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}


bool forms_x(vector< vector<int> > &data) {
    char ch = data.at(0).at(0);

    for (int i = 1; i < (int) data.size(); i++) {
        if ( data.at(i).at(i) != ch )
            return false;
    }

    int pos = data.size() - 1;
    ch = data.at(0).at(pos);

    for (int i = 1; i < (int) data.size(); i++) {
        pos--;
        if ( data.at(i).at(pos) != ch )
            return false;
    }

    return true;
}


bool is_diagonal(int x, int y, int vec_size) {
    if ( x == y || x + y == vec_size - 1 ) return true;
    return false;
}


bool is_same_char(vector<vector<int> > &v) {
    char ch = v.at(0).at(1), diagonal_char = v.at(0).at(0);
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if ( !is_diagonal( i, j, v.size() ) ) {
                if (v.at(i).at(j) != ch || v.at(i).at(j) == diagonal_char)
                    return false;
            }
        }
    }

    return true;
}
