#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int sum = (n * (n + 1) * (2 * n + 1)) / 6;

    cout << "Sum of squares of first " << n << " natural numbers = " << sum << endl;
    return 0;
}