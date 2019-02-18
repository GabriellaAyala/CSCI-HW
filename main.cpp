//  Name      :  Gabriella Ayala        
//  Student ID:  108427996  
//  Class     :  CSC 2312           
//  Due Date  :  Feb. 18, 2019

#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main(){
    Rectangle box1;
    Rectangle box2;

    cout << "Hello, please input data for Rectangle 1" << endl;
    box1 = box1.initRectangle();
    cout << "And now the data for Rectangle 2" << endl;
    box2 = box2.initRectangle();


    cout << "coordinates of box 1 ";
    box1.printCoordinates();
    cout << "coordinates of box 2 "; 
    box2.printCoordinates();  

    if(box1.intersect(box2)){
        cout << "Box 1 intersects box 2" << endl;
    }

    //for demonstration purposes
    if(box2.intersect(box1)){
        cout << "Box 2 intersects box 1" << endl;
    }


    return 0;
}