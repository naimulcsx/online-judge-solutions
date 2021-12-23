#include<bits/stdc++.h> 
using namespace std;

int main () {
    int n, input, total = 0;
    cin >> n;
    vector<int> drinks;

    while(n--) {
        cin >> input;
        drinks.push_back(input);
    }

    for_each(drinks.begin(), drinks.end(), [&](int val) {
        total += val;
    });
    
    cout.precision(14);
    cout << showpoint << static_cast<double>(total) / drinks.size() << endl;
    return 0;
}
