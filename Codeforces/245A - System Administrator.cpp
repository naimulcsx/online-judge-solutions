#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("files/input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	int a_reached = 0, a_lost = 0,
		b_reached = 0, b_lost = 0;

	while(n--) {
		int server, x, y;
		cin >> server >> x >> y;

		if (server == 1)
			a_reached += x,
			a_lost += y;
		else 
			b_reached += x,
			b_lost += y;
	}

	if (a_reached >= a_lost) cout << "LIVE" << endl;
	else cout << "DEAD" << endl;
	if (b_reached >= b_lost) cout << "LIVE" << endl;
	else cout << "DEAD" << endl;

	return 0;
}
