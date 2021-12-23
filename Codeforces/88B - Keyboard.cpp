#include <bits/stdc++.h>

using namespace std;

int marks[128];
bool can_be_typed( string &, map< char, vector< pair<int, int> > > & );
double distance(int, int ,int ,int);

int main() {    
    ios::sync_with_stdio(false);

    int n, m, x;
    cin >> n >> m >> x;
    
    // key_position contains a mapping between 
    // a correspoding key and their coordinates inside a vector
    map< char, vector< pair<int, int> > > key_position;
    vector<pair<int,int> >  temp;

    // a to z and s insert, an empty vector to the map
    for (int i = 'a'; i <= 'z'; ++i)
        key_position.insert( {i, temp} );
    key_position.insert( {'S', temp} );

    
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;

        pair<int, int> temp;
        // save each charecter into data
        for ( int j = 0; j < m; ++j )
            temp.first = i,
            temp.second = j,
            key_position[ s[j] ].push_back(temp);
    }


    // initialize
    for (int i = 0; i < 128; ++i) marks[i] = -1;

    int length; string text;
    cin >> length >> text;

    if ( !can_be_typed( text, key_position ) )
        cout << -1 << endl;
    
    else {  
        int count = 0;

        for ( int i = 0; i < text.length(); ++i ) {
            char ch = text[i];
            
            if ( isupper(ch) ) {

                if ( marks[ch] != -1 ) {
                    if (marks[ch] == 0) count++;
                    continue;
                }

                vector<pair<int, int> > shift_pos = key_position['S'];
                vector<pair<int, int> > char_pos = key_position[ tolower(ch) ];

                // count the minimum distance from shift to that letter
                double min_dis = 1000;
                pair<int, int> spos, cpos;

                for ( int i = 0; i < shift_pos.size(); ++i ) {
                    spos = shift_pos[i];

                    for (int j = 0; j < char_pos.size(); ++j) {
                        cpos = char_pos[j];
                        double dist = distance(spos.first, cpos.first, spos.second, cpos.second);
                        if ( dist < min_dis ) min_dis = dist;
                    }
                }

                // if the distance is greater than x
                if ( min_dis > x ) count++, marks[ch] = 0;
                else marks[ch] = 1;
            }
        }

        cout << count << endl;
    }

    return 0;
}

bool can_be_typed( string &text, map< char, vector< pair<int, int> > > &key_position ) {
    for ( int i = 0; i < text.length(); ++i ) {
        char ch = text[i];

        if ( key_position[ tolower(ch) ].size() == 0 )
            return false;

        if ( isupper(ch) && key_position['S'].size() == 0 )
            return false;
    }

    return true;
}

double distance(int x1, int x2, int y1, int y2) {
    return sqrt( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) ) ;
}
