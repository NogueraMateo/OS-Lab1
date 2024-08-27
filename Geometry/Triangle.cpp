#include "Triangle.h"
#include <cmath>

/**
 * Constructor
 */
Triangle::Triangle( 
    float initialSideSize ,
    float initialsecondSideSize , 
    float intitialthirdSideSize,
    const string & color )

    :Shape( initialSideSize, color )
    , secondSideSize { initialsecondSideSize }, thirdSideSize { intitialthirdSideSize } 
{ 
    sides = 3; 
}

/**
 * Using Heron's formula to calculate the area of a triangle
 */
float Triangle::area () const {
    
    float s = (sideSizeCentimeters + secondSideSize + thirdSideSize) / 2; // Getting the semiperimeter
    return sqrt(s * (s - sideSizeCentimeters) * (s - secondSideSize) * (s - thirdSideSize)); // Applying the formula
}


/**
 * Returns the perimeter of a triangle
 */
float Triangle::perimeter() const {
    return sideSizeCentimeters + secondSideSize + thirdSideSize;
}