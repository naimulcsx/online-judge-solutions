#include <iostream>
using namespace std;

int main() {   
    freopen("input.txt", "r", stdin);
    
    int harry_shots, larry_shots, total_shots;
    cin >> harry_shots >> larry_shots;
    total_shots = harry_shots + larry_shots;
    
    cout << (total_shots - harry_shots - 1) << " " << (total_shots - larry_shots - 1) << endl;
}
