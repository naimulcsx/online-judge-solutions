#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("files/input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	map<string, bool> data;

	while(n--) {
		string s;
		cin >> s;

		if ( !data.count(s) )
			cout << "NO" << endl,
			data.insert({s, true});
		
		else 
			cout << "YES" << endl;
	}
	return 0;
}
