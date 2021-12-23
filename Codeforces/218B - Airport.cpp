#include <bits/stdc++.h>
using namespace std;

int max_cost(vector<int> seats, int needed) {
    priority_queue<int> q;
    for (int i = 0; i < (int) seats.size(); ++i)
        q.push(seats.at(i));

    int count = 0;
    for (int i = 0; i < needed; ++i) {
        int max_price = q.top();
        count += max_price;
        q.pop();
        --max_price;
        q.push(max_price);
    }
    return count;
}

int min_cost(vector<int> seats, int needed) {
    int i = 0, count = 0;
    while( needed != 0 ) {
        if (seats.at(i) == 0) ++i;
        if (i >= (int) seats.size()) break;
        count += seats.at(i);
        seats.at(i)--;
        needed--;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int pass, planes;
    cin >> pass >> planes;

    vector<int> seats;
    for(int i = 0; i < planes; ++i) {
        int seat; cin >> seat;
        seats.push_back(seat);
    }

    sort( seats.begin(), seats.end() );
    cout << max_cost(seats, pass) << " " << min_cost(seats, pass) << endl;
    return 0;
}
