//  Name      :  Gabriella Ayala        
//  Student ID:  108427996  
//  Class     :  CSC 2312           
//  Due Date  :  Feb. 18, 2019

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
        //asks for user input to initialize a rectangle
        Rectangle initRectangle();
        //gets the top left coordinate
        const Point getCoordinate();
        //gets the height of a rectangle
        int getHeight();
        //gets the width of a rectangle
        int getWidth();
        //returns whether or not two rectangles intersect
        bool intersect(const Rectangle& toCompare) const;
        //prints all of the coordinates starting with the
        //top-left point, then bottom-left, bottom-right, and top right
        void printCoordinates();
};  

#endif 