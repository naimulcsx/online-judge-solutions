#include <bits/stdc++.h>
using namespace std;

bool marks[201000];

int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> n >> str;

    int marked = 0; 
    bool flag;
    for (int i = 0; i < n - 1; ++i) {
    
        if (marked % 2 == 0) flag = true;
        else flag = false;

        // even number of previous removal
        if (flag)  {
            int pos = i + 1;
            if (pos % 2 == 1 && str[i] == str[i + 1]) {
                marks[i] = 1;
                marked++;
            }
        } 

        // odd number of previous removal
        else {
            int pos = i + 1;
            if (pos % 2 == 0 && str[i] == str[i + 1]) {
                marks[i] = 1;
                marked++;
            }
        }
    }


    string res = "";
    for (int i = 0; i < n; ++i) 
        if (marks[i] == 0) res += str[i];

    if (res.size() & 1) marked++, res.pop_back();

    cout << marked << endl;
    cout << res << endl;
    return 0;
}
