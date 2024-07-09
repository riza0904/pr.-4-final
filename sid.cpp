#include <iostream>
#include <string>
using namespace std;
int main () {
    string s;
    getline(cin, s);
    int count = 0;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    count++;
    cout << count;
    return 0;
}