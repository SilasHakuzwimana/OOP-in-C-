#include <iostream>
#include "Circle.h"   // Include the Circle class

using namespace std;

int main() {
    // Create a default Circle object
    Circle c1;
    cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
         << " Color=" << c1.getColor() << endl;

    // Modify Circle properties
    c1.setRadius(2.1);
    c1.setColor("blue");
    cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
         << " Color=" << c1.getColor() << endl;

    // Create another Circle object using a constructor
    Circle c2(5.0, "green");
    cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
         << " Color=" << c2.getColor() << endl;

    return 0;
}
