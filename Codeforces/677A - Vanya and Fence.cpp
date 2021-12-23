#include <iostream>
#include <vector>

using namespace std;
int min_width_of_road(const vector<int> & , int);

int main() {
    int people, fence_height;
    cin >> people >> fence_height;

    vector<int> people_heights;
    int value;

    for (int i = 0; i < people; i++) {
        cin >> value;
        people_heights.push_back(value);
    }

    cout << min_width_of_road(people_heights, fence_height) << endl;

    return 0;
}


int min_width_of_road(const vector<int> &people_heights , int fence_height) {
    int width {0};

    // If the height of some person is greater than h he can bend down
    // the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2

    for (int height: people_heights) {
        if (height > fence_height)
            width += 2;
        else
            width++;
    }

    return width;
}
