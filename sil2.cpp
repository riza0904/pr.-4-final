#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);  
    int i, j;
    cin >> i >> j;

    reverse(s.begin() + i - 1, s.begin() + j);
    cout << s << endl;

    return 0;
}
