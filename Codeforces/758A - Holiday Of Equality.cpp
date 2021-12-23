#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int ulli;

int main () {
    int n, input, max = 0; 
    ulli is_to_spend = 0;

    cin >> n;
    vector<int> welfares;

    while(n--) {
        cin >> input;
        welfares.push_back(input);
    }

    max = *max_element(welfares.begin(), welfares.end());

    for_each(welfares.begin(), welfares.end(), [&](int welfare) {
        is_to_spend += (max - welfare);
    });   
 
    cout << is_to_spend << endl;
    return 0;
}
