#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    string s;
    cin >> s;

    string orig = s;
    reverse(s.begin(), s.end());

    if (s == orig){
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}