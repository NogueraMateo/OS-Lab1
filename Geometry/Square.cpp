#include "Square.h"

/**
 * Constructor
 */
Square::Square( float initialSideSize,  const string & initialColor )
: Shape( initialSideSize, initialColor ) {sides = 4;}

/**
 * Returns the area of a square
 */
float Square::area() const  {
    return sideSizeCentimeters * sideSizeCentimeters;
}

/**
 * Returns the perimeter of a square
 */
float Square::perimeter() const {
    return sides * sideSizeCentimeters;
}