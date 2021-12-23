#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int x, input;
    vector<int> city_positions;
    cin >> x;

    for (int i = 0; i < x; i++) {
        cin >> input;
        city_positions.push_back(input);
    }

    vector< map<string, int> > data;

    for (int i = 0; i < city_positions.size(); i++) {
        map <string, int> temp;

        temp["max"] = 0;
        temp["min"] = city_positions.size() - 1;

        if (i != 0 && i != city_positions.size() - 1) {
            int max, min;

            if (abs(city_positions.at(i) - city_positions.at(0)) > abs(city_positions.at(i) - city_positions.at(city_positions.size() - 1)))
                max = abs(city_positions.at(i) - city_positions.at(0));
            else
                max = abs(city_positions.at(i) - city_positions.at(city_positions.size() - 1));


            if (abs(city_positions.at(i) - city_positions.at(i - 1)) < abs(city_positions.at(i) - city_positions.at(i + 1)))
                min = abs(city_positions.at(i) - city_positions.at(i - 1));
            else
                min = abs(city_positions.at(i) - city_positions.at(i + 1));
            
            temp["max"] = max;
            temp["min"] = min;
                
        } else if (i == 0) {
            temp["min"] = abs(city_positions.at(0) - city_positions.at(i + 1));
            temp["max"] = abs(city_positions.at(0) - city_positions.at(city_positions.size() -1) );
        } else if (i == city_positions.size() - 1) {
            temp["min"] = abs(city_positions.at(i) - city_positions.at(i - 1));
            temp["max"] = abs(city_positions.at(i) - city_positions.at(0));
        }

        data.push_back(temp);
    }


    for (auto map : data)
        cout << map["min"] << " " << map["max"] << endl;
    

    return 0;
}