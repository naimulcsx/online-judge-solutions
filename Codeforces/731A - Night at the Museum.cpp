#include <iostream>
#include <cctype>
#include <cmath>
#include <string>

using namespace std;

int get_minimum_distance(char src, char dest) {
    int distance;
    src = tolower(src);
    dest = tolower(dest);

    // if the distance between the pointed charecter and the destination charecter is greater than 13, then we want make our movement to the opposite side
    if (abs(src - dest) > 13)
        distance = 26 - abs(src - dest);

    // else the distance is the differce between the source and the dest
    else
        distance = abs(src-dest);
    
    return distance;
}

int main() {
    string input;
    cin >> input;

    int minimum_rotations  = get_minimum_distance('a', input.at(0));
    char pointer = input.at(0);

    for (int i = 0, j = 1; i < input.length() - 1; i++, j++)
        minimum_rotations += get_minimum_distance(input.at(i), input.at(j));

    cout << minimum_rotations << endl;
}