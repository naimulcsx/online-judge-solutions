#include <iostream>
#include <string>

using namespace std;
int char_to_int(char n) {return n - 48;}

int main() {
    int calorie_wastage[4];
    for(int i = 0; i < 4; i++)
        cin >> calorie_wastage[i];

    string stripe_data;
    cin >> stripe_data;

    int total_calorie_wastage = 0;

    for (char ch: stripe_data)
        total_calorie_wastage += calorie_wastage[char_to_int(ch) - 1];
    
    cout << total_calorie_wastage << endl;
}