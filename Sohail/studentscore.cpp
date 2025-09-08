#include <iostream>
using namespace std;

int main() {
    int s;
    cout << "Enter score: ";
    cin >> s;

    if(s>100 || s<0) cout << "Invalid!";
    else if(s>=90) cout << "Grade: A";
    else if(s>=80) cout << "Grade: B";
    else if(s>=70) cout << "Grade: C";
    else if(s>=60) cout << "Grade: D";
    else cout << "Grade: F";

    return 0;
}