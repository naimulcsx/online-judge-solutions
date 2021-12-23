#include <iostream>

using namespace std;
struct uniform {int home_uniform, host_uniform;};

bool is_same_uniform(struct uniform *UT1, struct uniform *UT2);

int main() {
    int teams;
    cin >> teams;
    struct uniform uniforms[teams];

    for (int i = 0; i < teams; i++) 
        cin >> uniforms[i].home_uniform >> uniforms[i].host_uniform;

    
    int count = 0;

    /* only two teams playing against each other
      (1, 2) -> when T1 is host and T2 is guest
      (2, 1) -> When T2 is guest and T1 is host

      count -> how many times is a host team going to put on the guest uniform? 
    */
    
    for (int i = 1; i <= teams; i++)
        for (int j = 1; j <= teams; j++) 
            if (i != j)
                // if the both have same uniform color, then count it
                if (is_same_uniform(&uniforms[i - 1], &uniforms[j - 1]))
                    count++;


    cout << count << endl;
}


bool is_same_uniform(struct uniform *UT1, struct uniform *UT2) {
    return (UT1->home_uniform == UT2->host_uniform) ? true : false;
}
