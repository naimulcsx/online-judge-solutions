#include <bits/stdc++.h>
using namespace std;

vector<int> *seive(int);
vector<int> *segmented_seive(int, int);

int main(void) {
    int t, c = 0;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        vector<int> *primes = segmented_seive( a, b );
        if (c != 0) cout << endl;

        for ( auto it = primes->begin(); it != primes->end(); it++ )
            cout << *it << endl;

        c++;
    }
    
    return 0;
}

vector<int> *segmented_seive(int a, int b) {
    /* get the vector of primes between 1 - sqrt(b) */
    vector<int> *primes = seive( sqrt(b) );

    /* array for marking primes between a and b,
    ** marks[0] represents if a is prime or not
    ** marks[n] represents if (a + n) is prime or not */

    bool marks[b - a + 1];
    // assign every item in the marks array with true
    memset(marks, true, b - a + 1);

    // if a == 1, marks[0] = false, which means 1 is not a prime number
    if (a == 1) marks[0] = false;

    int current_prime, base;

    // interate over the vector of primes
    for (int i = 0; i < (int) primes->size(); i++) {

        current_prime = primes->at(i);

        /*  base defines from where we wanna start out inner loop
            so, we want to start from the first multiple of current_prime
            in each iteration we want to jump to the next multiple of current_prime

            For example: 
                when a = 3, b = 25, primes = [2 ,3 ,5]

                when current_prime is 2
                    we want to start from 4, next we go to 6, 8, 10 .... and so on
        */

        base = (a / current_prime) * current_prime;
        if ( base < a ) base += current_prime;

        for ( int j = base; j <= b; j+= current_prime )
            marks[j - a] = false;

        if (base == current_prime)  
            marks[base - a] = true;
    }

    vector<int> *result = new vector<int>();
    for ( int i = 0; i <= b - a; i++)
        if ( marks[i] )
            result->push_back(i + a);

    return result;
}


vector<int> *seive(int n) {
    bool marks[n + 1];
    memset(marks, true, n + 1);
    marks[0] = marks[1] = false;

    for (int i = 2; i * i <= n; i++) 
        if ( marks[i] ) 
            for (int j = i * i; j <= n; j += i) 
                marks[j] = false;

    vector<int> *result = new vector<int>();    
    for (int i = 0; i <= n; i++)
        if (marks[i])
            result->push_back(i);

    return result;
}
