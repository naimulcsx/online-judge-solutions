#include <iostream>

using namespace std;

void sort(int *ptr) {
    int temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (ptr[i] < ptr[j]) {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int case_no = 1;

    while(n--) {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];

        sort(x);
        cout << "Case " << case_no << ": " << x[1] << endl;

        case_no++;
    }
}