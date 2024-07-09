#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    int sum = 0;

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] > max){
            max = arr[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    cout << sum << " " << max;
    return 0;

}