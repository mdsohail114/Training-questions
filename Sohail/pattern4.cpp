#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 6;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cout << j << " ";   
        }
        cout << endl;
    }

    return 0;
}
