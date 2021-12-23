#include <bits/stdc++.h>
using namespace std;

bool visited[1000][1000];
int n, q1, q2, x1, x2, y2;

void visit(int x, int y) {
    if ( visited[x][y] ) return;
    if ( x < 1 || y < 1 || x > n || y > n ) return;
    if ( abs(x - q1) == abs(y - q2) ) return;
    if ( x == q1 || y == q2 ) return;

    visited[x][y] = 1;
    vector<int> dx {1, -1, 0, -1, 1, 0, -1, 1};
    vector<int> dy {0, 0, 1, 1, 1, -1, -1, -1};
    for (int i = 0; i < 8; ++i) visit(x + dx[i], y + dy[i]);
}

int main() {    
    int y1;
    scanf("%d %d %d", &n, &q1, &q2);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    visit(x1, y1);
    
    if (visited[x2][y2]) printf("YES\n");
    else printf("NO\n");

    return 0;   
}
