#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int sum = n * (n + 1);  

    cout << "Sum of first " << n << " even natural numbers = " << sum << endl;
    return 0;
}