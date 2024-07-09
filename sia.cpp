#include <iostream>
#include <string>
using namespace std;

int main () {
    string s;
    cin >> s;
        if (s[0] >= '0' and s[0] <= '9') {
            cout << "yes";
        }
        else {
            cout << "no";
        }
    
    return 0;
}