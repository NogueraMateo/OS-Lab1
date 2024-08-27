#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape 
{
    private:
        float secondSideSize;
    
    public:
        Rectangle( float initialSideSize = 3, float initialSecondSideSize = 6, const string & initialColor = "White");
        float area() const;
        float perimeter() const;
};


#endif