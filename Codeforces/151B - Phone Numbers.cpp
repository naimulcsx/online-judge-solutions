#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_taxi(const string &str) {
    vector<int> freq(10, 0);

    for (int i = 0; i < 8; ++i)
        if (isdigit(str[i])) 
            freq[ str[i] - '0' ]++;

    for (int i = 0; i < 10; ++i) if (freq[i] == 6) return true;
    return false;
}

bool is_pizza(const string &str) {
    vector<int> seq;
    unordered_map<char, int> freq;
    for (int i = 7; i >= 0; --i) {
        if (isdigit( str[i] )) {
            seq.push_back(str[i] - '0');
            freq[str[i]]++;
        }
    }
    if ( freq.size() == 6 && is_sorted(seq.begin(), seq.end()) ) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    vector<pair<string, vector<int>>> data;

    while(q--) {
        int n; string name;
        cin >> n >> name;
        vector<int> t(3, 0);
        
        for (int i = 0; i < n; ++i) {
            string num;
            cin >> num;
            if ( is_taxi(num) ) t[0]++;
            else if ( is_pizza(num) ) t[1]++;
            else t[2]++;
        }
        
        data.push_back({name, t});
    }

    int mx_tx = 0, mx_pizz = 0, mx_girl = 0;
    for ( auto it = data.begin(); it != data.end(); ++it ) {
        mx_tx = max(it->second[0], mx_tx);
        mx_pizz = max(mx_pizz, it->second[1]);
        mx_girl = max(mx_girl, it->second[2]);
    }

    vector<string> tx, pizz, girl;
    for ( auto it = data.begin(); it != data.end(); ++it ) {
        if ( it->second[0] == mx_tx ) tx.push_back(it->first);
        if ( it->second[1] == mx_pizz ) pizz.push_back(it->first);
        if ( it->second[2] == mx_girl ) girl.push_back(it->first); 
    }

    cout << "If you want to call a taxi, you should call: ";
    int ts = tx.size();
    for (int i = 0; i < ts; ++i) {
        if (i != ts - 1) cout << tx[i] << ", ";
        else cout << tx[i] << "." << endl;
    }

    cout << "If you want to order a pizza, you should call: ";
    int ps = pizz.size();
    for (int i = 0; i < ps; ++i) {
        if (i != ps - 1) cout << pizz[i] << ", ";
        else cout << pizz[i] << "." << endl;
    }
    

    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    int gs = girl.size();
    for (int i = 0; i < gs; ++i) {
        if (i != gs - 1) cout << girl[i] << ", ";
        else cout << girl[i] << "." <<  endl;
    }
    
    return 0;
}
