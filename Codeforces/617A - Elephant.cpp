#include <iostream>
#include <vector>
using namespace std;

int count_step(int &, int);

int main() {
    int n, count = 0;
    cin >> n;

    vector<int> steps {5, 4, 3, 2, 1};
    for (auto step: steps)
        count += count_step(n, step);

    cout << count << endl;
    return 0;
}

int count_step(int &n, int step) {
    int count = 0;
    if (n >= step) {
        count += (n / step);
        n -= step * (n / step);
    }
    return count;
}
