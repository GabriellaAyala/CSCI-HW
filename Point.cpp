//  Name      :  Gabriella Ayala        
//  Student ID:  108427996  
//  Class     :  CSC 2312           
//  Due Date  :  Feb. 18, 2019

#include <iostream>
#include "Point.h"

using namespace std;

Point::Point() : x(0), y(0) 
{    
} //end default constructor

Point::Point(int _x, int _y){
    x = _x;
    y = _y;
} //end constructor

//define getters and setters for point
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

//overload << operator to print coordinates in (x, y) format
ostream& operator<<(ostream& os, const Point& toPrint){
    os << "(" << toPrint.x << ", " << toPrint.y << ")";

    return os;
}