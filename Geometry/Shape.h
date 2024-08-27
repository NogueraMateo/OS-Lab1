#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using namespace std;

class Shape
{
    protected:
        int sides = 1;
        float sideSizeCentimeters;
        string color;

    public:
        Shape( float intialSideSize = 10, const string & initialColor = "Blue" );
        string getColor() const;
        virtual float area() const = 0;
        virtual float perimeter() const = 0;

};

#endif