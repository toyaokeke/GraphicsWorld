//
// Created by toyaokeke on 2020-04-04.
//

#include "Point.h"
#ifndef ENSF_607_PROJECT_SHAPE_H
#define ENSF_607_PROJECT_SHAPE_H


class Shape{
private:
    Point origin;
    char* shapeName;
    void copy(const Shape&);
public:
    Shape(int, int, char*);
    Shape(const Shape&);
    ~Shape();

    virtual Point getOrigin() const;

    char* getName() const;
    virtual void display();
    virtual double area() = 0;
    virtual double perimeter() = 0;
    double distance(Shape&);
    static double distance(Shape&, Shape&);
    void move(double, double);

    virtual void setName(char*);

    virtual void setOrigin(Point);
};



#endif //ENSF_607_PROJECT_SHAPE_H
