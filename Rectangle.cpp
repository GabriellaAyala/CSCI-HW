#include <iostream>
#include "Rectangle.h"
#include "Point.h"

Rectangle::Rectangle() : coordinate(Point(0,0)), height(2), width(2)
{
} //end default constuctor

Rectangle::Rectangle(Point _coordinate, int _height, int _width){
    coordinate = _coordinate;
    height = _height;
    width = _width;
}

const Point Rectangle::getCoordinate(){
    return coordinate;
}

int Rectangle::getHeight(){
    return height;
}

int Rectangle::getWidth(){
    return width;
}

bool Rectangle::intersect(Rectangle toCompare) const{
    bool xIntersect = false;
    bool yIntersect = false;

    int origRightX, origLeftX, compRightX, compLeftX;
    int origTopY, origBottomY, compTopY, compBottomY;

    origRightX = coordinate.x + width;
    origLeftX = coordinate.x; 

    compRightX = toCompare.coordinate.x + width;
    compLeftX = toCompare.coordinate.x;

    if((compLeftX >= origLeftX) && (compLeftX <= origRightX)){
        xIntersect = true;
    } else if (compRightX >= origLeftX && compRightX <= origRightX){
        xIntersect = true;
    } 

    if((compTopY <= origTopY) && (compTopY >= origBottomY)){
        yIntersect = true;
    } else if((compBottomY <= origTopY) && (compBottomY >= origBottomY)){
        yIntersect = true;
    } 

    cout << "Y inter " << yIntersect << " X inter " << xIntersect << endl;

    if(xIntersect && yIntersect){
        return true;
    } else {
        return false;
    }

    return true;
}