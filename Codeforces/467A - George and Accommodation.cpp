#include <iostream>

using namespace std;

int main() {
    int rooms, free_places = 0;
    cin >> rooms;

    while(rooms--) {
        int people_living, room_accomodation;
        cin >> people_living >> room_accomodation;

        if (room_accomodation - people_living >= 2)
            free_places++;
    }

    cout << free_places << endl;
}