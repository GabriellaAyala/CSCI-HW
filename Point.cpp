#include <iostream>
#include "Point.h"

using namespace std;

Point::Point() : x(0), y(0) 
{    
} //end default constructor

Point::Point(int _x, int _y){
    x = _x;
    y = _y;
}

void Point::setX(int _x){
    x = _x;
}

void Point::setY(int _y){
    y = _y;
}

int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}

ostream& operator<<(ostream& os, const Point& toPrint){
    os << toPrint.x << ", " << toPrint.y << endl;

    return os;
}