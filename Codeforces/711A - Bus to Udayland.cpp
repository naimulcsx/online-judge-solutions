#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string temp;
    vector<string> data;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        data.push_back(temp);
    }

    // process 
    bool flag = false;
    for (int i = 0; i < data.size(); ++i) {
        
        if (data[i][0] == data[i][1] && data[i][0] == 'O') {
            flag = true,
            data[i][0] = '+',
            data[i][1] = '+';
            break;
        }

        if (data[i][3] == data[i][4] && data[i][3] == 'O') {
            flag = true,
            data[i][3] = '+',
            data[i][4] = '+';
            break;
        }
    }

    // output
    if (flag) {
        cout << "YES" << endl;
        for (int i = 0; i < data.size(); ++i)
            cout << data[i] << endl;
    } 
    else 
        cout << "NO" << endl;
    
    return 0;
}
