#include <iostream>

using namespace std;
struct Gift {
    int giver;
    int receiver;
};

// function prototypes
void bubble_sort(Gift *, int );
void print_struct(Gift *, int );

int main() {
    int n, input, k = 1;
    cin >> n;
    Gift data[n];

    for (int i = 0; i < n; i++) {
        cin >> input;
        // data[i].giver is the friend who gave a gift to data[i].receiver friend
        data[i].giver = input;
        data[i].receiver = k;
        k++;
    }

    // sort accending by the the giver of the gift
    bubble_sort(data, n);

    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            cout << data[i].receiver << " ";
        else
            cout << data[i].receiver << endl;
    }
    
    return 0;
}


void bubble_sort(Gift *data, int length) {
    bool noSwaps;

    for (int i = 0; i < length; i++) {
        noSwaps = true;
        for (int j = 0; j < length - i - 1; j++) {
            if ( data[j + 1].giver < data[j].giver ) {
                Gift temp = data[j+1];
                data[j + 1] = data[j];
                data[j] = temp;
                noSwaps = false;
            }
        }

        if (noSwaps)
            break;
    }
}


void print_struct(Gift *data, int length) {
    for (int i = 0; i < length; i++)
        cout << "Giver " << data[i].giver << " , receiver " <<  data[i].receiver << endl;
}