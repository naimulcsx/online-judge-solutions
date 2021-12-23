#include <bits/stdc++.h>
using namespace std;

vector<string> arr[5];

int main() {
    int n;
    cin >> n;

    while(n--) {
        string name, pos;
        cin >> name >> pos;
        if (pos == "rat") arr[1].push_back(name);
        else if (pos == "woman" || pos == "child") arr[2].push_back(name);
        else if (pos == "man") arr[3].push_back(name);
        else arr[4].push_back(name);
    }

    for (int i = 1; i <= 4; ++i)
        for (auto el: arr[i]) 
            cout << el << endl;
        
    return 0;
}
