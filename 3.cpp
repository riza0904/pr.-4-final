#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int sum = 0;
    int last = n%10;

    while (n > 0) {
        sum += n%10;
        n /= 10;
    }

    if (sum % last == 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}