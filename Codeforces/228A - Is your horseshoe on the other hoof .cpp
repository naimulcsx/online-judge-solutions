#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main() {

    map<int, int> data;
    vector<int> horseshoes;
    int input, i = 0;

    // input and push to vectors
    while(i < 4) {
        cin >> input;
        horseshoes.push_back(input);
        i++;
    }

    // save color frequency in a map
    for (int i: horseshoes) {
        if (!data.count(i))
            data.insert(make_pair(i, 1));
        else
            data[i]++;
    }

    // find the max frequency of a particular color
    int min_horseshoes_to_buy = 0;
    map<int, int>::iterator it;

    for (it = data.begin(); it != data.end(); it++)
        if (it->second > 1)
            min_horseshoes_to_buy += it->second - 1;

    cout << min_horseshoes_to_buy << endl;
    return 0;
}