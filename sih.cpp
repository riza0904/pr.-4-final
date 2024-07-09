#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count[256] = {0}; 

    for (int i = 0; i < s.size(); ++i) {
        count[s[i]]++;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (count[s[i]] == 2) {
            cout << s[i] << endl;
            break;
        }
    }

    return 0;
}
