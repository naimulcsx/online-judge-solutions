#include <iostream>
using namespace std;

int main() {
    int rides_to_make, m_rides, single_ride_cost, m_ride_cost;
    cin >> rides_to_make >> m_rides >> single_ride_cost >> m_ride_cost;

    double single_m_cost = (double) m_ride_cost / m_rides;
    int total = 0, left;

    if ( single_m_cost < (double) single_ride_cost ) {

        if ( rides_to_make > m_rides ) {
            total += (rides_to_make / m_rides) * m_ride_cost;
            left = rides_to_make % m_rides;

            if (left * single_ride_cost < m_ride_cost)
                total += left * single_ride_cost;
            else
                total += m_ride_cost;
        } 
        
        else {
            if (rides_to_make * single_ride_cost < m_ride_cost)
                total += rides_to_make * single_ride_cost;
            else
                total += m_ride_cost;
        }
    }

    else {
        left = rides_to_make;
        total += rides_to_make * single_ride_cost;
    }

    cout << total << endl;
    return 0;
}
