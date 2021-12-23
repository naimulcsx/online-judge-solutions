#include <iostream>
#include <map>
#include <string>

using namespace std;
void printMap(map<int, int> &);

int main(void) {
    int n;
    cin >> n;

    while(n--) {
        int length;
        cin >> length;
        map<int, int> data;

        for (int i = 0; i < length; i++) {
            int key;
            cin >> key;

            // if the key exists increment the associated value by one
            // else create a new name/value pair
            if ( data.count(key) )
                data[key]++;
            else
                data.insert(make_pair(key, 1));
        }

        map<int, int>::iterator it;

        for (it = data.begin(); it != data.end(); it++) 
            if (it->second > 1) 
                cout << it->first << endl;
    }
    
    return 0;
}


void printMap(map <int, int> &data) {
    map<int, int>::iterator it;

    for (it = data.begin(); it != data.end(); it++)
        cout << it->first << "\t" << it->second << endl;
}