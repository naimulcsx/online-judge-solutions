#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int);

int main(void) {
    int n;
    cin >> n;
    vector<int> primes = sieve(164000);

    while(n--) {
        int pos;
        cin >> pos;
        cout << primes.at(pos - 1) << endl;
    }

    return 0;
}

vector<int> sieve(int n) {
    vector<bool> marks(n + 1, true);
    marks[0] = marks[1] = false;

    for (int i = 4; i <= n; i += 2)
        marks.at(i) = false;

    int limit = sqrt(n) + 1;

    for (int i = 3; i <= n; i += 2) {
        if (marks.at(i) && i <= limit) {

            for (int j = i * i; j <= n; j += i)
                marks.at(j) = false;
        }
    }

    vector<int> result;
    for (int i = 0; i < n + 1; i++) {
        if (marks[i])
            result.push_back(i);
    }

    return result;
}
