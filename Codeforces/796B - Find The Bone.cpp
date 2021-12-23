#include <iostream>
#include <map>
using namespace std;

bool marks[1000001] {false};

int main() {
    ios::sync_with_stdio(false);    
    int cups, holes, swaps, input;
    cin >> cups >> holes >> swaps;

    // mark the hole positions
    for (int i = 0; i < holes; ++i) {
        cin >> input;
        marks[input] = true;
    }

    int bone_pos = 1, from, to;

    for (int i = 0; i < swaps; ++i) {
        cin >> from >> to;
        // if there is a hole in the current bone's position
        if ( marks[bone_pos] ) break;

        if ( from == bone_pos )
            bone_pos = to;
        
        else if ( to == bone_pos ) 
            bone_pos = from;
    }

    cout << bone_pos << endl;
    return 0;
}
