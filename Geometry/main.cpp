#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"

#include <iostream>

int main() {
    
    Triangle triangle(3, 4, 5, "Blue");
    cout << "Triangle:\n";
    cout << "Color: " << triangle.getColor() << "\n";
    cout << "Perimeter: " << triangle.perimeter() << "\n";
    cout << "Area: " << triangle.area() << "\n\n";


    Rectangle rectangle(5, 10, "Red");
    cout << "Rectangle:\n";
    cout << "Color: " << rectangle.getColor() << "\n";
    cout << "Perimeter: " << rectangle.perimeter() << "\n";
    cout << "Area: " << rectangle.area() << "\n\n";

    
    Square square(4, "Green");
    cout << "Square:\n";
    cout << "Color: " << square.getColor() << "\n";
    cout << "Perimeter: " << square.perimeter() << "\n";
    cout << "Area: " << square.area() << "\n\n";

    return 0;
}