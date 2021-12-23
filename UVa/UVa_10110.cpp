#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned int n, k;
    
    /*  For every factor of n, the switch will be toggled of the n'th bulb
        that means, if n = 10, it's factors are 1, 2, 5, 10
        So, the switch will be toggled 4 times -> On - Off - On - Off

        Therefore, if the number of factors on n is even, the bulb will be turned Off
        else when the number of factors is even, the buld will be turned on
        So, we need to find if the number of factors is even or odd

        Now, only the perfect square numbers have odd factors, because there is one pair which will consist of same number, like 6 x 6 = 36, all the other pairs are unique.
        
        36  = 1 x 36
            = 2 x 18
            = 3 x 12
            = 4 x 9
            = 6 x 6

        So, the algorithm boils down to:

            if n is a perfect square number
                the n'th bulb will be on
            else
                the n'th buld will be turned off
    */

    while(1) {
        cin >> n;
        if (n == 0) break;
        k = sqrt(n);
        
        if (k * k == n)
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
    }
    
    return 0;
}
