#include <bits/stdc++.h>
using namespace std;
using ulli = unsigned long long int;

struct info{int strength, bonus;};

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int initial, rounds;
    cin >> initial >> rounds;
    
    bool flag = true;
    struct info data[rounds];
    for(int i = 0; i < rounds; ++i)
        cin >> data[i].strength >> data[i].bonus;   


    sort(data, data + rounds, [](struct info a, struct info b) {
        return a.strength < b.strength;
    });

    for (int i = 0; i < rounds; ++i) {
        if (data[i].strength >= initial) {
            flag = false;
            break;
        }
        initial += data[i].bonus;
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
