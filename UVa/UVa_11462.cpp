#include <bits/stdc++.h>
using namespace std;

void vin(vector<int> &, int);

int main() {
    int n;

    while(scanf("%d", &n) && n) {
        vector<int> data;
        vin(data, n);
        sort(data.begin(), data.end());
        
        for (int i = 0; i < data.size(); i++) {
            if (i != data.size() - 1)
                printf("%d ", data[i]);
            else
                printf("%d\n", data[i]);
        }
    }

    return 0;
}

void vin(vector<int> &data, int n) {
    int input;
    while(n--) {
        scanf("%d", &input);
        data.push_back(input);
    }
}
