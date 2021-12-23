#include <iostream>
#include <map>
using namespace std;

inline void map_inserter( map<int, int> &, int );

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int input;
    map<int, int> freq1, freq2;
    // insert the first list into freq1
    for (int i = 0; i < n; ++i) {
        cin >> input;
        map_inserter(freq1, input);
    }

    // insert the second list into freq2
    for (int i = 0; i < n - 1; ++i) {
        cin >> input;
        map_inserter(freq2, input);
        // decrement each values for each keys in freq1
        freq1[input]--;
    }

    // if value of any element in freq1 is not zero, that means that element is missing in second list
    for (auto it = freq1.begin(); it != freq1.end(); it++)
        if (it->second != 0) 
            { cout << it->first << endl; break; }

    // input the third list and decrement each values for each keys in freq2
    for (int i = 0; i < n - 2; ++i)
        cin >> input, freq2[input]--;


    // similarly if value of any element in freq2 is not zero, that means that element is missing in thrid list
    for (auto it = freq2.begin(); it != freq2.end(); it++)
        if (it->second != 0) 
            { cout << it->first << endl; break; }

    return 0;
}

inline void map_inserter( map<int, int> &freq, int input ) {
    if ( !freq.count(input) ) 
        freq.insert( {input, 1} );
    else 
        freq[input]++;
}
