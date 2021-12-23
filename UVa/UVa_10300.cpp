#include <bits/stdc++.h>
using namespace std;

struct farmer {int farmyard_size, animals, env_friendliness;};
void struct_input(farmer *, int);

int main() {
    
    int n, f;
    cin >> n;

    while(n--) {
        cin >> f;
        farmer data[f];
        struct_input(data, f);

        int total {0};
        double premium_per_animal, total_premium;

        for (int i = 0; i < f; i++) {
            premium_per_animal = ( (double) data[i].farmyard_size / data[i].animals) * data[i].env_friendliness;
            total_premium = premium_per_animal * data[i].animals;
            total += ceil(total_premium);
        }

        cout << total << endl;
    }


    return 0;
}

void struct_input(farmer *data, int len) {
    for (int i = 0; i < len; i++) 
        cin >> data[i].farmyard_size >> data[i].animals >> data[i].env_friendliness;
}
