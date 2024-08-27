#include "Shape.h"

Shape::Shape( float initialSideSize , const string & initialColor )
: sideSizeCentimeters{ initialSideSize }, color {initialColor} {}

string Shape::getColor() const {
    return color;
}
