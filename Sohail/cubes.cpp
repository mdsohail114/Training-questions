#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    long long sum = (1LL * n * (n + 1) / 2) * (1LL * n * (n + 1) / 2);

    cout << "Sum of cubes of first " << n << " natural numbers = " << sum << endl;
    return 0;
}