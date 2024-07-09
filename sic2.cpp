#include <iostream>
#include <string>
using namespace std;

int main () {
    string s;
    cin >> s;
    if (s[0] >= 'a' and s[0] <= 'z'){
    s[0] = s[0] - 'a' + 'A';
    }
    else {
        s[0] = s[0] - 'A' + 'a';
    }

    cout << s;
    return 0; 
}