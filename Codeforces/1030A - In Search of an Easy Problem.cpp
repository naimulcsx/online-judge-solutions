#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> data;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        data.push_back(input);
    }

    if (find(data.begin(), data.end(), 1) != data.end())
        cout << "HARD" << endl;
    else 
        cout << "EASY" << endl;

    return 0;
}
