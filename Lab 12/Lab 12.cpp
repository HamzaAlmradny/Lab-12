

#include <iostream>
using namespace std;


int main() {

    float x, y, z;
    bool tri;

    cout << "Are the inputs sides or angles? If sides enter 1 if angles enter 0.";
    cin >> tri;

    if (tri) {
        
        cout << "Enter the first side: ";
        cin >> x;

        cout << "Enter the second side: ";
        cin >> y;

        cout << "Enter the third side: ";
        cin >> z;

        if (x + y > z && x + z > y && y + z > x) {
            if (x == y == z) {
                cout << "The triangle is equilateral ";
            }
            else if (x == y || x == z || y == z) {
                cout << "the triangle is isosceles ";
            }
            else {
                cout << "The triangle is scalene ";
            }

        }
       
        else {
            cout << "The shape is not triangle ";
        }
    }

    else {
        cout << "Enter the first angle ";
        cin >> x;

        cout << "Enter the second angle ";
        cin >> y;

        cout << "Enter the third angle ";
        cin >> z;

        if (x + y + z == 180) {

            if (x == y == z) {
                cout << "The triangle is equilateral ";
            }
            else if (x == y || x == z || y == z) {
                cout << "the triangle is isosceles ";
            }
            else {
                cout << "The Triangle is scalene ";
            }
        }
        else {
            cout << "The Shape is not triangle ";
        }
    }
    return 0;
}

