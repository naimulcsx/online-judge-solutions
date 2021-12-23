#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> divisors(int n) {
    vector<int> result;
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n)
            result.push_back(i);
        
        else if (n % i == 0) {
            result.push_back(i);
            result.push_back(n / i);
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int target, count = 0;
        cin >> target;

        vector<int> factors = divisors(target);
        sort(factors.begin(), factors.end());

        bool flag = false;
        for (int i = 1; i < factors.size(); ++i)
            if (factors[i] >= 2 && factors[i] <= 7)
                flag = true;

        // for (int i = 0; i < factors.size(); ++i) 
        // cout  << factors[i] << " ";
        // cout << endl;

        int res = 0;
        if (flag) {
            for (int i = 1; i < factors.size(); ++i) {
                if (target % factors[i] == 0) {
                    res = target / factors[i];
                    break;
                }
            }

            cout << res << endl;

        } else {

            res++;
            target -= 5;
            vector<int> factors = divisors(target);
            sort(factors.begin(), factors.end());


            for (int i = 1; i < factors.size(); ++i) {
                if (target % factors[i] == 0) {
                    res += (target / factors[i]);
                    break;
                }
            }

            cout << res << endl;
        }
    }
    return 0;
}
