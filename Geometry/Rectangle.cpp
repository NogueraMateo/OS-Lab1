#include "Rectangle.h"

/**
 * Constructor
 */
Rectangle::Rectangle( float initalSideSize, float initialSecondSideSize, const string & initialColor )
: Shape( initalSideSize, initialColor ), secondSideSize { initialSecondSideSize } {sides = 4;}


/**
 * Returns the area of a rectangle
 */
float Rectangle::area() const {
    return sideSizeCentimeters * secondSideSize;
}


/**
 * Returns the perimeter of a rectangle
 */
float Rectangle::perimeter() const {
    return (sideSizeCentimeters*2) + (secondSideSize * 2);
}