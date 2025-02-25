#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>  // Using string
using namespace std;

// Circle class declaration
class Circle {
private:
   double radius;
   string color;

public:
   // Constructors with default values
   Circle();
   Circle(double rad1);
   Circle(string col1);
   Circle(double rad1, string col1);

   // Getters & Setters
   double getRadius() ;
   void setRadius(double radius);
   string getColor();
   void setColor(string color);

   // Member functions
   double getArea();
   double getCircumference();
};

#endif
