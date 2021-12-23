#include <bits/stdc++.h>
using ll = long long;
using namespace std;


string str;
int tree[400500][26];

void init( int node, int begin, int end ) {
    if ( begin == end ) {
        tree[node][str[begin] - 'a'] = 1;
        return;
    }

    int mid = (begin + end) / 2;
    init( 2 * node, begin, mid );
    init ( 2 * node + 1, mid + 1, end );

    for (int i = 0; i < 26; ++i) {
        tree[node][i] = tree[2 * node + 1][i] || tree[2 * node][i];
    }
}


vector<int> query( int node, int begin, int end, int a, int b ) {
    if ( a > end || b < begin ) return vector<int>(26, 0);
    if ( begin >= a && end <= b ) {
        vector<int> res(26);
        for (int i = 0; i < 26; ++i) res[i] = tree[node][i];
        return res;
    }

    int left = 2 * node,
        right = left + 1,
        mid = (begin + end) / 2;

    vector<int> p1 = query( left, begin, mid, a, b );
    vector<int> p2 = query( right, mid + 1, end, a, b );
    vector<int> res(26, 0);
    for (int i = 0; i < 26; ++i) res[i] = p1[i] || p2[i];
    return res;
}

void update( int node, int begin, int end, int pos, char val ) {
    if ( pos < begin || pos > end ) return;
    if ( begin == end ) {
        for (int i = 0; i < 26; ++i) if (tree[node][i]) tree[node][i] = 0;
        tree[node][val - 'a'] = 1;
        return;
    }

    int left = 2 * node,
        right = left + 1,
        mid = (begin + end) / 2;

    update(left, begin, mid, pos, val);
    update(right, mid + 1, end, pos, val);
    
    for (int i = 0; i < 26; ++i) tree[node][i] = tree[2 * node][i] || tree[2 * node + 1][i];
}


int main() {

    int q;
    char temp[100100];
    scanf("%s ", temp + 1);
    temp[0] = ' ';
    str.assign(temp);

    scanf("%d", &q);
    int lim = str.size() - 1;
    init(1, 1, lim);

    while(q--) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int pos;
            char ch;
            scanf("%d %c ", &pos, &ch);
            update(1, 1, lim, pos, ch);
        } else {
            int l, r;
             scanf("%d %d", &l, &r);
            vector<int> res = query(1, 1, lim, l, r);

            int k = res.size(), cnt = 0;
            for (int i = 0; i < k; ++i) if (res[i]) cnt++;
            printf("%d\n", cnt);
        }
    }

    return 0;
}
