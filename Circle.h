//
// Created by toyaokeke on 2020-04-06.
//

#include "Shape.h"
#ifndef ENSF_607_PROJECT_CIRCLE_H
#define ENSF_607_PROJECT_CIRCLE_H

class Circle:public virtual Shape{
private:
    int radius;
    void copy(const Circle&);
public:
    Circle(int, int, int, char*);
    Circle(const Circle&);
    void display();
    double area();
    double perimeter();
    int getRadius() const;
    void setRadius(int);
    Circle& operator =(const Circle&);
};

#endif //ENSF_607_PROJECT_CIRCLE_H
