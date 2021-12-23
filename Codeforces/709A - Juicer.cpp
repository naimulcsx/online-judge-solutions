#include <iostream>

using namespace std;

int main() {
    int oranges, max_size, max_size_waste_section;
    cin >> oranges >> max_size >> max_size_waste_section;

    int oranges_size[oranges];
    for (int i = 0; i < oranges; i++)
        cin >> oranges_size[i];

    int temp = 0, count = 0;

    for (int i = 0; i < oranges; i++) {
        if (oranges_size[i] <= max_size) {
            temp += oranges_size[i];
        }

        if (temp > max_size_waste_section) {
            count++;
            temp = 0;
        }
    }

    cout << count << endl;
}