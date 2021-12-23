#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool has_police = false;
    int police_count = 0, untreated_crimes = 0;

    for (int i = 0; i < n; i++) {
        // if new polices are recruited, count them
        if (arr[i] > 0)
            police_count += arr[i];

        // flag, if there are police or not
        if (police_count > 0)  
            has_police = true;
        else if (police_count == 0)
            has_police = false;


        // if there are police and a crime occured, then decrease police_count by one
        if (has_police && arr[i] == -1)
            police_count--;
    
        // if there are no police and a crime occured, then count it as an untreated_crime
        else if (!has_police && arr[i] == -1)
            untreated_crimes++;
        
    }

    cout << untreated_crimes << endl;
}