#include <iostream>
#include <algorithm>
using namespace std;

typedef struct {
    int matchbox_count, matches_per_box;
} container;

int main() {

    int n, m;
    cin >> n >> m;
    container data[m];

    for (int i = 0; i < m; ++i)
        cin >> data[i].matchbox_count >> data[i].matches_per_box;

    sort(data, data + m, [](container a, container b) {
        return a.matches_per_box > b.matches_per_box;
    });

    int i = 0, count = 0;
    while( m-- ) {

        if ( n > data[i].matchbox_count ) {
            count += ( data[i].matchbox_count * data[i].matches_per_box );
            n -= data[i].matchbox_count;
            i++;
            continue;
        }

        count += n * data[i].matches_per_box;
        break;
    }

    cout << count << endl;
    return 0;
}
