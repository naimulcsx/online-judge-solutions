#include <iostream>

using namespace std;
void print_msg(int);

int main() {
    int n;
    cin >> n;
    print_msg(n);

    return 0;
}

void print_msg(int n) {
    for (int i = 0; i < n; i++) {
        cout << "I ";

        if (i % 2 == 0)
            cout << "hate ";
        else
            cout << "love ";

        if (n != 1 && i != n - 1)
            cout << "that ";
        else
            cout << "it ";
    }

    cout << endl;
}