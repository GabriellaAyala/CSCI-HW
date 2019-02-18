#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main(){
    Point point1(2, 4);
    Point point2(4, 3);

    Rectangle box1(point1, 2, 3);
    Rectangle box2(point2, 2, 3);

    cout << box1.intersect(box2) << endl;
    cout << box2.intersect(box1) << endl;

    return 0;
}