#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square: public Shape 
{
    public:
        Square( float initialSideSize = 5,  const string & initialColor = "White");
        float area() const;
        float perimeter() const;
};

#endif