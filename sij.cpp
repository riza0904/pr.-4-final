#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main () {
    string s;
    getline (cin, s);
    string orig = s;
    orig.erase(remove(orig.begin(), orig.end(), ' '), orig.end());
    string r_o = orig;
    reverse(r_o.begin(), r_o.end());
    if (orig == r_o){
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}