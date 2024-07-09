#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input); 

    string output;
    bool space = false;
    
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (c == ' ') {
            if (!space) {
                output += c;
            }
            space = true;
        } else {
            output += c;
            space = false;
        }
    }

    cout << output << endl;
    return 0;
}