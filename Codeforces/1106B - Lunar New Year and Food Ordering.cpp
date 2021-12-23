#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class comp {
    public:
        bool operator () (pair<ll, ll> a, pair<ll, ll> b) {
            return a.first > b.first;
        }
};

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    ll foods, customers;
    cin >> foods >> customers;
    vector<ll> remaining(foods), prices(foods);
    // input lists
    for (ll i = 0; i < foods; ++i)  cin >> remaining[i];
    for (ll i = 0; i < foods; ++i)  cin >> prices[i];
    
    priority_queue<pair<ll, ll>, vector<pair<ll,ll>>, comp> pq;
    for (ll i = 0; i < prices.size(); ++i)
        pq.push({prices[i], i});
    
  
    while(customers--) {
        ll food, count;
        cin >> food >> count;
        
        // units of food we can take of type food, which is minimum of what we want and what is available
        ll taken = min(count, remaining[food - 1]); // 6

        // decrease the units of dishes of type "food"
        remaining[food - 1] -= taken;

        // count if we need more
        ll need = count - taken; // 2

        // calculate price for taken units of dishes
        ll price = taken * prices[food - 1];
        
        
        bool flag = false;
        // if our queue is empty and we need food, then, there is no food available
        if (pq.size() == 0 && need > 0) {
            cout << 0 << endl;
            continue; // we go to the next customer
        }

        // while we need more dishes
        while (need != 0) {
            // get the dish of minimum price
            pair<ll, ll> p = pq.top();

            // if remaining of the minimum price dish is zero
            if (remaining[p.second] == 0) {
                if ( pq.empty() ) {
                    flag = true;
                    cout << 0 << endl;
                    break;
                }
                pq.pop();
                continue;
            }

            // get the units of food avaible of minimum price            
            ll min_price_food_count = remaining[p.second];

            // if the mininimum food count is less that what we need
            if ( need >= min_price_food_count ) {
                price += (min_price_food_count * p.first);
                remaining[p.second] = 0;
                need -= min_price_food_count;
                pq.pop(); // pop that off
            } else {
                price += p.first * need;
                remaining[p.second] -= need;
                break;
            }
        }
        
        if (!flag) cout << price << endl;
    }

    return 0;
}
