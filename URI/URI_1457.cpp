#include <iostream>
#include <cstring>

typedef long long int lli;
using namespace std;
lli calculate_result(int, int);


int main(void) {
	int n, x, size;
	lli sum;
	string s;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> x;
		getline(cin, s);
		size = s.length();
		cout << calculate_result(x, size) << endl;
	}

	return 0;
}

lli calculate_result(int num, int factorials) {
	lli total = num;
	int i = 1;

	while(num - (i * factorials) >= 1) {
		total *= (num - (i * factorials));
		i++;
	}
	return total;
}