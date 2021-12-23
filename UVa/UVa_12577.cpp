#include <iostream>
#include <string>

using namespace std;

int main() {
    int _case = 1;
    while(1) {
        string str;
        cin >> str; 
        if (str == "*") break;
        
        if (str == "Hajj") {
            cout << "Case " << _case << ": " << "Hajj-e-Akbar" << endl;
        } else if (str == "Umrah") {
            cout << "Case " << _case << ": " << "Hajj-e-Asghar" << endl;
        }

        _case++;
    }
}