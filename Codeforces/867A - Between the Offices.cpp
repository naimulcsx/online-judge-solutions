#include<bits/stdc++.h> 
using namespace std;

int main () {
    // freopen("files/input.txt", "r", stdin);
    // freopen("files/output.txt", "w", stdout);
    int n, f_to_s = 0, s_to_f = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < (int) s.length() - 1; i++) {
        if (s[i] == s[i + 1])
            continue;

        if (s[i] == 'F' && s[i + 1] == 'S')
            f_to_s++;

        else if (s[i] == 'S' && s[i + 1] == 'F')
            s_to_f++;   
    }

    if (s_to_f > f_to_s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
