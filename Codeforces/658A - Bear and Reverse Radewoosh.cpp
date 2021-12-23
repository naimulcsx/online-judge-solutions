#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("files/input.txt", "r", stdin);
	#endif

	int n, c;
	cin >> n >> c;

	int points[n], times[n];
	for (int i = 0; i < n; ++i) cin >> points[i];
	for (int i = 0; i < n; ++i) cin >> times[i];

	// calculate score for limak
	int time_eclapsed = 0, limak_points = 0;
	for(int i = 0; i < n; ++i) {
		time_eclapsed += times[i];
		limak_points += max(0, points[i] - c * time_eclapsed);
	}

	// calculate score for radewoosh
	int radewoosh_points = 0; time_eclapsed = 0;
	for (int i = n - 1; i >= 0; --i) {
		time_eclapsed += times[i];
		radewoosh_points += max(0, points[i] - c * time_eclapsed);
	}

	if (radewoosh_points > limak_points) cout << "Radewoosh" << endl;
	else if (radewoosh_points < limak_points) cout << "Limak" << endl;
	else cout << "Tie" << endl;
	return 0;
}
