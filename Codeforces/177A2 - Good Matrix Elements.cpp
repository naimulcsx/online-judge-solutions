#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("files/input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	
	int mat[n][n];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
            cin >> mat[i][j];

	// count sum for middle row and col
	int sum = 0;
	for (int i = 0; i < n; ++i)	 {
		if ( n/2 != i )
            sum += mat[n/2][i],
            sum += mat[i][n/2];
	}

	// count sum for primary diagonal
	for (int i = 0; i < n; ++i)
    sum += mat[i][i];
	
	// count sum for secondary diagonal
	for (int i = 0, j = n - 1; i < n; ++i, --j)
	    if (i != j) 
		    sum += mat[i][j];

    cout << sum << endl;
    return 0;
}
