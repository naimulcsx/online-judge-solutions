#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int s, v1, v2, t1, t2, p1, p2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    
    p1 = (v1 * s) + t1 * 2;
    p2 = (v2 * s) + t2 * 2;

    if (p1 < p2) cout << "First" << endl;
    else if (p1 > p2) cout << "Second" << endl;
    else cout << "Friendship" << endl;
    return 0;
}
