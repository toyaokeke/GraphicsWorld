//
// Created by toyaokeke on 2020-04-05.
//

#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Cornercut.h"
#include "GraphicsWorld.h"
#include <iostream>
using namespace std;

void GraphicsWorld::run() {
    cout << "\nThis program has been written by: Toya Okeke" ;
    cout << "\nSubmitted on: April 20, 2020\n";

    // =================================== PART 1 =======================================
    cout << "\n=================================== PART 1 =============================================\n" << endl;

    cout << "\nTesting Functions in class Point:" <<endl;
    Point m (6, 8);
    Point n (6,8);

    n.setX(9);
    m.display();
    n.display();

    cout << "\nThe distance between two points m and n is: " << m.distance(n) << endl;

    // Testing the second version of the function distance.
    cout << "\nThe distance between two points m and n is: " << Point::distance(m, n) << endl;
    cout << "\nThe total number of points is: " << Point::counter() << endl;

    cout << "\nTesting Functions in class Square:" <<endl;
    Square s(5, 7, 12, "SQUARE - S");
    s.display();
    cout << "the area of " << s.getName() <<" is: "<< s.area() << "\n";
    cout << "the perimeter of " << s.getName() <<" is: " << s.perimeter() << "\n";
    cout << "\nThe total number of points is: " << Point::counter() << endl;
    cout << "\nTesting Functions in class Rectangle:" <<endl;

    Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    a.display();
    Rectangle b(16 , 7, 8, 9, "RECTANGLE B");
    b.display();
    cout << "the area of " << a.getName() <<" is: "<< a.area() << "\n";
    cout << "the perimeter of " << a.getName() <<" is: "<< a.perimeter() << "\n";
    cout << "\nThe distance between two rectangles is: " << a.distance(b) << endl;
    a.move(2, -1);
    cout << a.getName() << " origin moved" << endl;
    a.display();
    cout << "\nThe distance between two rectangles is: " << a.distance(b) << endl;

    cout << "\nTesting copy constructor in class Rectangle:" <<endl;
    Rectangle rec1 = a;
    rec1.display();

    cout << "\nTesting assignment operator in class Rectangle:" <<endl;
    Rectangle rec2 (3, 4, 11, 7, "RECTANGLE rec2");
    rec2.display();
    rec2 = a;
    rec2.display();

    // =================================== PART 2 =============================================
    cout << "\n=================================== PART 2 =============================================\n" << endl;

    cout << "\nTesting Functions in class Circle:" <<endl;
    Circle c (3, 5, 9, "CIRCLE C");
    c.display();
    cout << "the area of " << c.getName() <<" is: "<< c.area() << endl;
    cout << "the perimeter of " << c.getName() << " is: "<< c.perimeter() << endl;
    cout << "\nThe distance between rectangle a and circle c is: " << a.distance(c) << endl;
    // YOU MAY ADD ADDITIONAL CODE HERE, IF NEEDED

    Cornercut rc (5, 10, 6, 12, 9, "CornerCut rc");
    rc.display();
    cout << "the area of " << rc.getName() <<" is: "<< rc.area() << endl;
    cout << "the perimeter of " << rc.getName() << " is: "<< rc.perimeter() << endl;
    cout << "\nThe distance between rc and c is: " << rc.distance(c) << endl;
    // Using array of Shape pointers:
    Shape* sh[4];
    sh[0] = &s;
    sh[1] = &a;
    sh [2] = &c;
    sh [3] = &rc;
    sh [0]->display();
    cout << "\nthe area of "<< sh[0]->getName() << " is: "<< sh[0] ->area() << endl;
    cout << "\nthe perimeter of " << sh[0]->getName () << " is: "<< sh[0]->perimeter() << endl;
    sh [1]->display();
    cout << "\nthe area of "<< sh[1]->getName() << " is: "<< sh[1] ->area() << endl;
    cout << "\nthe perimeter of " << sh[0]->getName () << " is: "<< sh[1]->perimeter();
    sh [2]->display();
    cout << "\nthe area of "<< sh[2]->getName() << " is: "<< sh[2] ->area() << endl;
    cout << "\nthe circumference of " << sh[2]->getName ()<< " is: "<< sh[2]->perimeter() << endl;
    sh [3]->display();
    cout << "\nthe area of "<< sh[3]->getName() << " is: "<< sh[3] ->area() << endl;
    cout << "\nthe perimeter of " << sh[3]->getName () << " is: "<< sh[3]->perimeter() << endl;
    cout << "\nTesting copy constructor in class CornerCut:" <<endl;
    Cornercut cc = rc;
    cc.display();
    cout << "\nTesting assignment operator in class CornerCut:" <<endl;
    Cornercut cc2(5, 100, 2, 12, 9, "CornerCut cc2");
    cc2.display();
    cc2 = cc;
    cc2.display();

    cout << "\nTesting destructors:" <<endl;
    cout << "\nThe total number of points is: " << Point::counter() << endl;
    for (int i = 0; i < 4; i++)
        delete sh[i];
    cout << "\nThe total number of points is: " << Point::counter() << endl;
}

int main(){
    GraphicsWorld g;
    g.run();
    return  0;
}