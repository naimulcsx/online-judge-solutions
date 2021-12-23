#include <iostream>
#include <vector>
using namespace std;
using ulli = unsigned long long int;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    ulli sum = 0;
    int arr[n], freq[1000010] {0};

    for (int i = 0; i < n; ++i)
        cin >> arr[i], 
        sum += arr[i],
        freq[arr[i]]++;

    vector<int> result;
    int count = 0, i = 0;

    while( i < n ) {
        freq[arr[i]]--;
        sum -= arr[i]; // sum without arr[i]

        // if there exists an element of value "sum / 2"
        // that means, the rest of the element's sum must be = sum - (sum / 2) = sum / 2
        // ingone odd numbers because
        // when sum is odd, we can't split that equally
        if ( sum % 2 == 0 && (sum / 2) < 1000010 && freq[sum / 2] )
            count++,
            result.push_back(i + 1);

        freq[arr[i]]++;
        sum += arr[i];
        i++;
    }   

    // print result
    cout << count << endl;
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}
