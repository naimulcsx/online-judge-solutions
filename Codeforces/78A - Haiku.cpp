#include <bits/stdc++.h>
using namespace std;

bool marks[200];

int main() {
    ios::sync_with_stdio(false);
    marks['a'] = marks['e'] = marks['i'] = marks['o'] = marks['u'] = true;
    
    string line;
    vector<int> res;
    for (int i = 0; i < 3; ++i) {
        getline(cin, line);
        int sz = line.size();
        int cnt = 0;
        for (int i = 0; i < sz; ++i)
           if ( marks[line[i]] ) cnt++ ;
        res.push_back(cnt);
    }

    if (res[0] == 5 && res[2] == 5 && res[1] == 7) cout << "YES" << endl;
    else cout << "NO" << endl; 
    return 0;
}
