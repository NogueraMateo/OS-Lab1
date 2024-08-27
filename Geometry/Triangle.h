#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle: public Shape
{
    private: 
        float secondSideSize;
        float thirdSideSize;
    public:
        Triangle( 
            float initialSideSize = 3, 
            float initialsecondSideSize = 3, 
            float initialthirdSideSize = 3,
            const string & color = "Green" );
        float area() const;
        float perimeter() const;
};

#endif