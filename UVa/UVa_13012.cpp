#include<bits/stdc++.h> 
using namespace std;

int main () {

    int n;
    while( cin >> n ) {
        int answers[5];
        for (int i = 0; i < 5; i++)
            cin >> answers[i];

        int correct_answer_count = 0;
        for (int i = 0; i < 5; i++)
            if (answers[i] == n)
                correct_answer_count++;

        cout << correct_answer_count << endl;
    }
 
    return 0; 
}