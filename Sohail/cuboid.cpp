#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;

    cout << "Enter length of the cuboid: ";
    cin >> length;

    cout << "Enter width of the cuboid: ";
    cin >> width;

    cout << "Enter height of the cuboid: ";
    cin >> height;

    volume = length * width * height;

    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}