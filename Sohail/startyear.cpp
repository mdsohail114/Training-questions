#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start year: ";
    cin >> start;
    cout << "Enter end year: ";
    cin >> end;

    cout << "Leap years between " << start << " and " << end << " are:\n";
    for (int y = start; y <= end; y++) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            cout << y << " ";
        }
    }
    return 0;
}