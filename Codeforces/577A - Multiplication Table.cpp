#include <iostream>
#include <vector>

using namespace std;
vector< pair<int, int> > get_divisors(int);

int main() {
    int n, x;
    cin >> n >> x;

    int count = 0;
    vector< pair<int,int> > divisors = get_divisors(x);
    
    for (int i = 0; i < divisors.size(); ++i) {
        if ( divisors[i].first >= 1 && divisors[i].second <= n ) {
            if ( divisors[i].second == divisors[i].first ) count++;
            else count += 2;
        }
    }

    cout << count << endl;
    return 0;
}

vector< pair<int, int> > get_divisors(int n) {
    vector< pair<int, int> > result;
    for ( int i = 1; i * i <= n; ++i ) {
        pair<int, int> temp;
        if ( n % i == 0 ) {
            temp.first = i;
            temp.second = n / i;
            result.push_back(temp);
        }
    }
    return result;
}
