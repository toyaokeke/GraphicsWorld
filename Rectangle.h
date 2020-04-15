//
// Created by toyaokeke on 2020-04-04.
//

#include "Square.h"
#ifndef ENSF_607_PROJECT_RECTANGLE_H
#define ENSF_607_PROJECT_RECTANGLE_H

class Rectangle: public Square{
private:
    int side_b;
    void copy(const Rectangle&);
public:
    Rectangle(int, int, int, int, char*);
    Rectangle(const Rectangle&);
    Rectangle& operator = (const Rectangle&);
    double area();
    double perimeter();
    void display();
    int getB() const;
    void setB(int);
};

#endif //ENSF_607_PROJECT_RECTANGLE_H
