#include <iostream>
#include <string>
#include <vector>
#include <map>

int max(int a, int b) {return (a > b) ? a : b;}
int min(int a, int b) {return (a < b) ? a : b;}
int max(int a, int b, int c) {return (a > max(b, c)) ? a : max(b, c);}
int min(int a, int b, int c) {return (a < min(b, c)) ? a : min(b, c);}

using namespace std;

void printArray(const vector<int> &arr) {
    for(int num : arr) 
        cout << num << " ";
    cout << endl;
}

int main() {
    int n, input;
    cin >> n;

    vector<int> data;
    for (int i = 0; i < n; i++) {
        cin >> input;
        data.push_back(input);
    }

    map<string, int> skill_data;
    skill_data.insert(make_pair("p", 0));
    skill_data.insert(make_pair("m", 0));
    skill_data.insert(make_pair("s", 0));

    for (int i = 0; i < n; i++) {
        switch (data.at(i)) {
            case 1:  skill_data["p"]++; break;
            case 2:  skill_data["m"]++; break;
            case 3:  skill_data["s"]++; break;
        }
    }
    
    int max_teams_can_be_formed;

    if (skill_data["p"] > 0 && skill_data["m"] > 0 && skill_data["s"] > 0)
        max_teams_can_be_formed =  min(skill_data["p"], skill_data["m"], skill_data["s"]);
    else
        max_teams_can_be_formed = 0;

     
    cout << max_teams_can_be_formed << endl;

    int p = 0, m = 0, s = 0;

    while(max_teams_can_be_formed--) {
        while(p < n - 1 && data.at(p) != 1) p++;
        while(m < n - 1 && data.at(m) != 2) m++;
        while(s < n - 1 && data.at(s) != 3) s++;
        
        data.at(p) = 0;
        data.at(m) = 0;
        data.at(s) = 0;


        cout << p + 1 << " ";
        cout << m + 1 << " ";
        cout << s + 1 << endl;
    }
}