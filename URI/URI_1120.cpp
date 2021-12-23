#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    while(1) {
        char a;
        char newString[1000000];

        string b;
        cin >> a >> b;

        if (a == '0' && b == "0") break;

        int j = 0, ignoredFirstNumber= 0;

        for (int i = 0; i < b.length(); i++) {
            if (b[i] == a) continue;
            

            newString[j] = b[i];
            j++;
        }

        newString[j] = '\0';

        string result(newString);
        result.erase(0, min(result.find_first_not_of('0'), result.size()-1));


        int zeroCount = 0;

        for (int i = 0; i < strlen(newString); i++) {
            if (newString[i] ==  '0')
                zeroCount++;
        }

        // cout << strlen(newString) << " " << zeroCount << endl;


        if (strlen(newString) == zeroCount) 
            cout << "0" << endl;
        else
            cout << result << endl;
    }
    
}