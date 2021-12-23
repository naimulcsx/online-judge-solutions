#include <bits/stdc++.h>
using namespace std;

int main(){
    int cakes_needed, time_per_oven, cakes_per_oven, time_to_build_second;
    cin >> cakes_needed >> time_per_oven >> cakes_per_oven >> time_to_build_second;

    int first = cakes_needed / cakes_per_oven;

    if(cakes_needed % cakes_per_oven != 0)
        first++;

    first *= time_per_oven;

    int second = time_per_oven + time_to_build_second;

    if ( first > second )
        cout<<"YES" << endl;
    else
        cout<<"NO" << endl; 

    return 0;
}