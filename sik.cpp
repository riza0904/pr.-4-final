#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main () {
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (size_t i = 0; i < s.size(); i++){
        s[i] = (s[i] - 'A' - n + 26) % 26 + 'A';
    }
    cout << s;
    return 0;
}