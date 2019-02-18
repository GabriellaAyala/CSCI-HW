//  Name      :  Gabriella Ayala        
//  Student ID:  108427996  
//  Class     :  CSC 2312           
//  Due Date  :  Feb. 18, 2019

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
} //end constructor

//define getters for Rectangle
const Point Rectangle::getCoordinate(){
    return coordinate;
}

int Rectangle::getHeight(){
    return height;
}

int Rectangle::getWidth(){
    return width;
}

bool Rectangle::intersect(const Rectangle& toCompare) const{
    //declare variables to keep track of whether the xCoordinates and 
    //yCoordinates indicate a possible intersection, set them to false initially
    bool xIntersect = false;
    bool yIntersect = false;

    //declare helper variables that keep track of the coordinates to compare 
    //and their positions
    int origRightX, origLeftX, compRightX, compLeftX;
    int origTopY, origBottomY, compTopY, compBottomY;

    //initialize original rectangle helper variables for the x coordinate
    origRightX = coordinate.x + width;
    origLeftX = coordinate.x; 

    //initialize the comparison rectangle helper variables for the x coordinate
    compRightX = toCompare.coordinate.x + toCompare.width;
    compLeftX = toCompare.coordinate.x;

    //if the left x coordinate of the comparison rectangle is between
    //the x coordinates of the original, the x coordinates intersect
    if((compLeftX >= origLeftX) && (compLeftX <= origRightX)){
        xIntersect = true;
    //if the right x coordinate of the comparison rectangle is between
    //the x coordinates of the original, the x coordinates intersect
    } else if (compRightX >= origLeftX && compRightX <= origRightX){
        xIntersect = true;
    } 

    //initialize original rectangle helper variables for the y coordinate
    origTopY = coordinate.y;
    origBottomY = coordinate.y - height; 

    //initialize the comparison rectangle helper variables for the x coordinate
    compTopY = toCompare.coordinate.y;
    compBottomY = toCompare.coordinate.y - toCompare.height;

    //if the top y coordinate of the comparison rectangle is between 
    //the y coordinates of the original, the y coordinates intersect
    if((compTopY <= origTopY) && (compTopY >= origBottomY)){
        yIntersect = true;
    //if the bottom y coordinate of the comparison rectangle is between 
    //the y coordinates of the original, the y coordinates intersect
    } else if((compBottomY <= origTopY) && (compBottomY >= origBottomY)){
        yIntersect = true;
    } 

    //if both the x and y coordinates intersect, the rectangles intersect
    if(xIntersect && yIntersect){
        return true;
    //otherwise they don't
    } else {
        return false;
    }
}

//print the coordinates in (x, y) format;
void Rectangle::printCoordinates(){
    //initialize a tempCoordinate helper variable to help
    //determine all four coordinates
    Point tempCoord = coordinate;

    //print the top left coordinate
    cout << tempCoord << ", ";

    //set the tempCoord y coordinate to the bottom y coordinate by subtracting height
    tempCoord.setY(tempCoord.y - height);

    //print the bottom left coordinate
    cout << tempCoord << ", ";

    //set the tempCoord x coordinate to the right x coordinate by adding width
    tempCoord.setX(tempCoord.x + width);

    //print the bottom right coordinate
    cout << tempCoord << ", ";

    //set the tempCoord y coordinate back to the top y coordinate by adding height
    tempCoord.setY(tempCoord.y + height);

    //print the top right coordinate
    cout << tempCoord << endl;
}

Rectangle Rectangle::initRectangle(){
    //declare helper variables
    int tempX, tempY, tempHeight, tempWidth;
    Point tempPoint;

    //get all of the necessart data from the user
    cout << "x of rectangle: ";
    cin >> tempX;
    cout << "y of rectangle: ";
    cin >> tempY;
    cout << "height of rectangle: ";
    cin >> tempHeight;
    cout << "width of rectangle: ";
    cin >> tempWidth;

    //initialize the tempPoint with the coordinates provided by the user
    tempPoint = Point(tempX, tempY);

    //return a new rectangle with the data provided by the user
    return Rectangle(tempPoint, tempHeight, tempWidth);

}