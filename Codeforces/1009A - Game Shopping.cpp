#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int games, bills;
    cin >> games >> bills;
    vector<int> prices(games);
    deque<int> bills_(bills);
    for (int i = 0; i < games; ++i) cin >> prices[i];
    for (int i = 0; i < bills; ++i) cin >> bills_.at(i);

    int count = 0;
    for (int i = 0; i < games; ++i) {
        int price = prices[i];
        if (bills_.size() > 0 && price <= bills_[0]) {
            count++;
            bills_.pop_front();
        }
    }

    cout << count << endl;
    return 0;
}
