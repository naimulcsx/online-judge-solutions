#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    map<string, string> data;
    string host, ip, cmd;
    while(n--)
        cin >> host >> ip, 
        data.insert({ip, host});


    while(m--) {
        cin >> cmd >> ip;
        ip.pop_back();
        cout << cmd << " "<< ip << ";" << " #" << data[ip] << endl;
    }
    return 0;
}
