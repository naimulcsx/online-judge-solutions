#include<bits/stdc++.h> 
using namespace std;

int main () {
    int n, count = 0;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        if (s == "Icosahedron")
            count += 20;
        else if (s == "Dodecahedron")
            count += 12;
        else if (s == "Octahedron")
            count += 8;
        else if (s == "Cube")
            count += 6;
        else if (s == "Tetrahedron")
            count += 4;
    }

    cout << count << endl;
    return 0; 
}
