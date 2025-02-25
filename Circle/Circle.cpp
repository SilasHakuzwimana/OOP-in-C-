#include "Circle.h" // Include the user-defined header
#include <iostream>  // For input-output

// Default Constructor
Circle::Circle() {
    radius = 1.0;
    color = "red";
}

// Constructor with radius
Circle::Circle(double r) {
    radius = r;
    color = "red";
}

// Constructor with color
Circle::Circle(string c) {
    radius = 1.0;
    color = c;
}

// Constructor with both radius and color
Circle::Circle(double r, string c) {
    radius = r;
    color = c;
}

// Getter for radius
double Circle::getRadius() {
    return radius;
}

// Setter for radius
void Circle::setRadius(double r) {
    radius = r;
}

// Getter for color
string Circle::getColor(){
    return color;
}

// Setter for color
void Circle::setColor(string c) {
    color = c;
}

// Calculate the area of the circle
double Circle::getArea(){
    return radius * radius * 3.14159265;
}

// Calculate the circumference of the circle
double Circle::getCircumference(){
    return 2 * radius * 3.14159265;
}
