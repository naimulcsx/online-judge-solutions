#include<bits/stdc++.h>
using namespace std;

int cnt[14];

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < (int) str.size(); ++i) 
        cnt[str[i] -'0']++;

    if (cnt[4] == 0 && cnt[7] == 0) printf("-1\n");
    else if (cnt[4] >= cnt[7]) printf("4\n");
    else if (cnt[7] > cnt[4]) printf("7\n");
    
    return 0;
}