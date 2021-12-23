/*
Problem Link:
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct data {
    ll id, old_score, new_score, change;
    bool operator <(const data &rhs) const {
        // when change is equal for both, then give priority to id
        if (change == rhs.change) 
            return id < rhs.id;
        // when change is different then, give priority to change value
        return change < rhs.change;
    }
};

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    priority_queue<data> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        ll id, old_score, new_score, change, post, like, comment, share;
        cin >> id >> old_score >> post >> like >> comment >> share;
        new_score = post * 50 + like * 5 + comment * 10 + share * 20;
        change = new_score - old_score;
        struct data temp {id, old_score, new_score, change};
        q.push(temp);
    }

    for (int i = 0; i < 5; ++i) {
        cout << q.top().id << " " << q.top().new_score << endl;
        q.pop();
    }

    return 0;
}
