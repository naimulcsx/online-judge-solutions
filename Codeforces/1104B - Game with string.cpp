#include <bits/stdc++.h>
using namespace std;

template <typename T> ostream& operator << (ostream &os, const vector<T> &v ) {
    auto f = v.begin(), e = v.end();
    for ( auto it = f; it != e; ++it ) cout << *it << ' ';
    return os;
}

int main() {
    ios::sync_with_stdio(false);
    
    string str;
    cin >> str;
    stack<char> st;
    st.push(str[0]);    

    int turn = 0, n = str.size();
    for (int i = 1; i < n; ++i) {
        if ( st.empty() ) st.push('0');

        char last = st.top();
        if ( last == str[i] ) {
            st.pop();
            turn++;
        } else st.push( str[i] );
    }
    
    if ( turn % 2 == 0 ) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
