#include <iostream>
#include <string>
using namespace std;

int main () {
    string subs, s;
    getline(cin, subs);
    getline (cin, s);

    size_t found = s.find(subs);
    if (found != string::npos){
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}