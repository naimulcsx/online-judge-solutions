#include <bits/stdc++.h>
using namespace std;

string str;
int cnt[200];

bool is_palindrome() {
    int odd = 0;
    for (int i = 'a'; i <= 'z'; ++i) {
        if (cnt[i] > 0 && cnt[i] % 2 == 1) {
            odd++;
        }
    }
    return odd <= 1;
}

void remove_optimally() {
    bool has_even = false;
    for (int i = 'a'; i < 'z'; ++i) {
        if (cnt[i] > 0 && cnt[i] % 2 == 0) {
            has_even = true;
            cnt[i]--;
            break;
        }
    }

    if (has_even) return;

    for (int i = 'a'; i <= 'z'; ++i) {
        if (cnt[i] > 0 && cnt[i] % 2 == 1) {
            cnt[i]--;
            break;
        }
    }
}

int main() {
    cin >> str;
    for (auto el: str) cnt[el]++;

    int cnt = 0;
    while( !is_palindrome() ) {
        cnt++;
        remove_optimally();
    }

    if (cnt % 2 == 0) cout << "First" << endl;
    else cout << "Second" << endl;
	return 0;
}
