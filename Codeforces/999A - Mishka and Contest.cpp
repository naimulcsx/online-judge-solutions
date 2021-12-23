#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, k, input;
    cin >> n >> k;

    deque<int> probs;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        probs.push_back(input);
    }

    int count = 0;
    while(probs.size() >= 2 && (probs.at(0) <= k || probs.at(probs.size() - 1) <= k)) {
        if (probs.at(0) <= k)
            count++,
            probs.pop_front();

        if (probs.at(probs.size() - 1) <= k)
            count++,
            probs.pop_back();
    }

    if (probs.size() == 1 && probs.at(0) <= k) count++;  
    cout << count << endl;
    return 0;
}
