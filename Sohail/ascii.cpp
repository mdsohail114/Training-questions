#include <iostream>
using namespace std;

int main() {
    char ch;
    int asciiValue;  

    cout << "Enter a character: ";
    cin >> ch;

    asciiValue = int(ch);

    cout << "The ASCII code of '" << ch << "' is: " << asciiValue << endl;

    return 0;
}