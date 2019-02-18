#ifndef RECTANGLE
#define RECTANGLE

#include "Point.h"

class Rectangle{
    private:
        Point coordinate;
        int height;
        int width;
    public:
        //default constructor, sets a 2 unit tall and 2 unit wide square with bottom left coordinate at origin
        Rectangle();
        //sets a rectangle with defined top left coordinate at designated coordinate
        Rectangle(Point _coordinate, int _height, int _width);
        //gets the top left coordinate
        const Point getCoordinate();
        int getHeight();
        int getWidth();
        bool intersect(Rectangle toCompare) const;
};  

#endif 