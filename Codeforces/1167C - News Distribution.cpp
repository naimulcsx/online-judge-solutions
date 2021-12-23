#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream & operator << (ostream &os, vector<T> vec) {
    for (auto el: vec) os << el << ' ';
    return os;
}

class DisjointSet {
    public:
        int *id, *weight, size;
        DisjointSet( int n );
        int root(int p);
        bool is_connected(int p, int q);
        void connect(int p, int q);
};


DisjointSet::DisjointSet(int n)  {
    size = n;
    id = new int[n];
    weight = new int[n];
    for (int i = 0; i < size; ++i) id[i] = i;
    for (int i = 0; i < size; ++i) weight[i] = 1;
}

int DisjointSet::root(int p) {
    int root = p;
    while(id[root] != root) root = id[root];

    // tree compression
    while(p != root) {
        int newp = id[p];
        id[p] = root;
        p = newp;
    }

    return root;
}

void DisjointSet::connect(int p, int q)  {
    if ( p == q || is_connected(p, q) ) return;
    int i = root(p), j = root(q);

    // we always root the smaller tree to the larger tree
    if (weight[i] < weight[j]) {
        id[i] = j;
        weight[j] += weight[i];
    } else {
        id[j] = i;
        weight[i] += weight[j];
    }
}

bool DisjointSet::is_connected(int p, int q)  {
    if (p == q) return true;
    return root(p) == root(q);
}


int main() {
    int n, m;
    cin >> n >> m;
    DisjointSet s(n);

    for (int i = 1; i <= m; ++i) {
        int k;
        cin >> k;
        if (k == 0) continue;
        vector<int> arr(k);
        for (auto &el: arr) cin >> el;
        for (int i = 1; i < k; ++i) s.connect( arr[0] - 1, arr[i] - 1 );
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) mp[s.root(i)]++;
    for (int i = 0; i < n; ++i) cout << mp[s.root(i)] << ' ';
    cout << endl;
    return 0;
}
