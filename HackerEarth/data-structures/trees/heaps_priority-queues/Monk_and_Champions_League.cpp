/*
Problem Link:
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif
 
    int row, needed;
    cin >> row >> needed;
 
    priority_queue<int> q;
    for (int i = 0; i < row; ++i) {
        int seats; cin >> seats;
        q.push(seats);
    }
 
    int max = 0;
    for (int i = 0; i < needed; ++i) {
        int price = q.top();
        max += price;
        --price;
        q.pop();
        q.push(price);
    }
    cout << max << endl;
    return 0;
}
