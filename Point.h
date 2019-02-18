#ifndef POINT
#define POINT

#include <iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
        friend class Rectangle;
    public:
        //default constructor creates a new point at origin
        Point();
        //constructor creates a new point at specified coordinates
        Point(int _x, int _y);
        //getters and setters for the coordinates
        void setX(int _x);
        void setY(int _y);
        int getX();
        int getY();
        //overloaded stream operator
        friend ostream & operator<<(ostream& os, const Point& toPrint);
};

#endif