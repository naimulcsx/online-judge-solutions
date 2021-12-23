#include <iostream>

using namespace std;

int main() {
    int yakko_points, wakko_points, max_points, chances, total_outcomes = 6;
    cin >> yakko_points >> wakko_points;


    max_points = (yakko_points > wakko_points) ? yakko_points : wakko_points;
    chances = 6 - max_points + 1;

    for (int i = 6; i > 1; i--) {
        if (total_outcomes % i == 0 && chances % i == 0) {
            chances /= i;
            total_outcomes /= i;
        }
    }
    
    cout << chances << "/" << total_outcomes << endl;
}